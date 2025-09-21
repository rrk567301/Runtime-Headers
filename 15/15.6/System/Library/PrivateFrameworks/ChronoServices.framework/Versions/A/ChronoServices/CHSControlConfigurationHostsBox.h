@class NSDictionary;

@interface CHSControlConfigurationHostsBox : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *configurationsByHost;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigurationsByHost:(id)a0;

@end
