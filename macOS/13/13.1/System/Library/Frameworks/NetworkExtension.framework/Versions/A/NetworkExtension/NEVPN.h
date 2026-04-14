@class NSArray, NEVPNProtocol;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *exceptionApps;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (nonatomic, getter=isDisconnectOnDemandEnabled) BOOL disconnectOnDemandEnabled;
@property (nonatomic, getter=isOnDemandUserOverrideDisabled) BOOL onDemandUserOverrideDisabled;
@property (copy) NSArray *onDemandRules;
@property (copy) NEVPNProtocol *protocol;
@property long long tunnelType;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)a0;

@end
