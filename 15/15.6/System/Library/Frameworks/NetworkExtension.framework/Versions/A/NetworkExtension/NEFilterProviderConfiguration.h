@class NSString, NSDictionary, NSURL, NSData;

@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    char _controlProviderInitialized;
    NSString *_keychainAccessGroup;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *pluginType;
@property (copy) NSString *packetProviderDesignatedRequirement;
@property char disableDefaultDrop;
@property char preserveExistingConnections;
@property (copy) NSURL *dataProviderURL;
@property (copy) NSURL *packetProviderURL;
@property (copy) NSString *dataProviderDesignatedRequirement;
@property char filterBrowsers;
@property char filterSockets;
@property char filterPackets;
@property (copy) NSDictionary *vendorConfiguration;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSString *organization;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSString *filterDataProviderBundleIdentifier;
@property (copy) NSString *filterPacketProviderBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
