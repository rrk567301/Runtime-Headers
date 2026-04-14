@interface SearchIntrospectionKit.SettingsQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queryString;
    void /* unknown type, empty encoding */ queryIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
