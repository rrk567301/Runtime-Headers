@class NEDNSProxyProviderProtocol, NEPerApp;

@interface NEDNSProxy : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isEnabled) char enabled;
@property (copy) NEDNSProxyProviderProtocol *protocol;
@property (copy) NEPerApp *perApp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
