template <typename From, typename To>
class implicit_convertible {
    typedef char (&yes)[1];
    typedef char (&no)[2];
    static yes test( To );
    static no test( ... );
public:
    static const bool value = sizeof( test( *(From*)0 ) ) == sizeof( yes );
};
