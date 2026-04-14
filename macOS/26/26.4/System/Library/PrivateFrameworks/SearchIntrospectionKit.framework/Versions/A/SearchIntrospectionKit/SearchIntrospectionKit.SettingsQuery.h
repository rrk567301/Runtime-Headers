@interface SearchIntrospectionKit.SettingsQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queryString;
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ injectionMethod;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
