@class NEAppPush, NEHotspot, NERelayConfiguration, NEPathController, NEDNSSettingsBundle, NEProfileIngestionPayloadInfo, NSString, NEVPNApp, NEDNSProxy, NEContentFilter, NEAOVPN, NEVPN, NEURLFilterConfiguration, NSArray, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    BOOL _resolvedProviderMachOUUIDs;
    NSArray *_providerMachOUUIDs;
    long long _appPermissionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
@property (readonly, getter=isTransparentProxy) BOOL transparentProxy;
@property (readonly, nonatomic) BOOL usesPolicyBasedRouting;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NEAppPush *appPush;
@property (copy) NERelayConfiguration *relay;
@property (copy) NEURLFilterConfiguration *urlFilter;
@property (copy) NEHotspot *hotspot;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;
+ (id)configurationWithProfilePayload:(id)a0;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (id)getConfigurationIdentifier;
- (id)getInstalledSystemCertificatePersistentRef;
- (void)copyPasswordsFromSystemKeychain;
- (BOOL)setPerAppUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setAssociatedDomains:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyOverrides;
- (id)getCertificates;
- (void)setSystemCertificateData:(id)a0;
- (BOOL)setCertificates:(id)a0 keyRefs:(id)a1 specs:(id)a2;
- (BOOL)setPerAppRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (id)copyProviderMachOUUIDs;
- (BOOL)setProfileInfo:(id)a0;
- (id)description;
- (id)getPendingCertificateInfo:(id)a0;
- (id)descriptionWithOptions:(unsigned long long)a0;
- (id)generateSignature;
- (id)getPendingCertificateUUIDs:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)setExcludedDomains:(id)a0;
- (void)clearSystemKeychain;
- (BOOL)setCertificates:(id)a0;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (BOOL)setSMBDomains:(id)a0;
- (unsigned long long)hash;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setContactsDomains:(id)a0;
- (BOOL)setCalendarDomains:(id)a0;
- (BOOL)setMailDomains:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (void).cxx_destruct;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;

@end
