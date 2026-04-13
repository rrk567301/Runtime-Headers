@interface PegasusConfiguration.Config : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _configData;
    void /* unknown type, empty encoding */ _userAgent;
    void /* unknown type, empty encoding */ _clientName;
    void /* unknown type, empty encoding */ _userDefaults;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;

@end
