@interface SearchIntrospectionKit.MailQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queryString;
    void /* unknown type, empty encoding */ queryIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
