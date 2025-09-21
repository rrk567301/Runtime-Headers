@class NSString, NSURL;

@interface FPAppMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char useDefaultProviderDomainID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (readonly, nonatomic) char isManaged;

+ (id)_entitledCloudDocsContainerIDForAppProxy:(id)a0;
+ (id)_entitledUbiquityContainerIDForAppProxy:(id)a0;
+ (char)_isContainerIDPermitted:(id)a0;
+ (id)_localizedCustomDisplayNameForAppProxy:(id)a0;
+ (id)findBundleIDForCurrentPlatformInSet:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppProxy:(id)a0 providerDomainID:(id)a1;

@end
