@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isEnabled) char enabled;
@property (getter=isToggleEnabled) char toggleEnabled;
@property (getter=isAllowCaptiveWebSheet) char allowCaptiveWebSheet;
@property (getter=isAllowAllCaptiveNetworkPlugins) char allowAllCaptiveNetworkPlugins;
@property (copy) NSDictionary *interfaceProtocolMapping;
@property (copy) NSString *activeInterfaceProtocolKey;
@property (copy) NSDictionary *serviceExceptions;
@property (copy) NSDictionary *applicationExceptions;
@property (copy) NSDictionary *allowedCaptiveNetworkPlugins;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
