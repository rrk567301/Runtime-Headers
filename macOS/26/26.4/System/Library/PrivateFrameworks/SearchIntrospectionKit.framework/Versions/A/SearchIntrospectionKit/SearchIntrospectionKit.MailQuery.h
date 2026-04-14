@interface SearchIntrospectionKit.MailQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queryString;
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ timeout;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
