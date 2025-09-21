@class LSExtensionPoint, NSString, NSUUID, NSDate, LSApplicationExtensionRecord, NSDictionary, LSBundleProxy, NSNumber;

@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {
    unsigned int _platform;
    unsigned int _pluginFlags;
    LSApplicationExtensionRecord *_appexRecord;
    NSString *_extensionPointID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSUUID *pluginUUID;
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) LSBundleProxy *containingBundle;
@property (readonly, nonatomic, getter=isOnSystemPartition) char onSystemPartition;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) char pluginCanProvideIcon;
@property (readonly, nonatomic) LSExtensionPoint *extensionPoint;

+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)a0 error:(id *)a1;
+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1;
+ (id)plugInKitProxyForPlugin:(unsigned int)a0 withContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(char)a3;
+ (id)plugInKitProxyForUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
+ (id)pluginKitProxyForIdentifier:(id)a0;
+ (id)pluginKitProxyForURL:(id)a0;
+ (id)pluginKitProxyForUUID:(id)a0;

- (id)launchPersonas;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (char)UPPValidated;
- (id)_initWithPlugin:(unsigned int)a0 andContext:(struct LSContext { id x0; } *)a1 applicationExtensionRecord:(id)a2 resolveAndDetach:(char)a3;
- (id)_initWithUUID:(id)a0 bundleIdentifier:(id)a1 pluginIdentifier:(id)a2 effectiveIdentifier:(id)a3 version:(id)a4 bundleURL:(id)a5;
- (id)_localizedNameWithPreferredLocalizations:(id)a0 useShortNameOnly:(char)a1;
- (id)_managedPersonas;
- (id)_stringLocalizerForTable:(id)a0;
- (char)_usesSystemPersona;
- (id)_valueForEqualityTesting;
- (id)boundIconsDictionary;
- (id)bundleType;
- (id)correspondingApplicationExtensionRecord;
- (id)dataContainerURL;
- (void)detach;
- (char)freeProfileValidated;
- (id)groupContainerURLs;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1 inScope:(unsigned long long)a2;
- (char)profileValidated;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)teamID;

@end
