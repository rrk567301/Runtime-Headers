@class NSString, NSDictionary, NSURL, NSMutableArray, PKDistribution;

@interface PKDistributionPackageReference : NSObject <PKPackageReferable> {
    NSMutableArray *_pkgRefElements;
    NSString *_pkgRefIdentifier;
    PKDistribution *_distribution;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *MD5;
@property (readonly) NSString *fileDigest;
@property (readonly) long long fileDigestType;
@property (readonly) NSDictionary *additionalInfo;
@property (readonly) NSString *digest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)valueForUndefinedKey:(id)a0;
- (void)setURL:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)distribution;
- (void)setValue:(id)a0 forAttributeName:(id)a1;
- (id)valueForAttributeName:(id)a0;
- (id)packageIdentifier;
- (id)scriptForAttributeName:(id)a0;
- (id)scriptForAttributeName:(id)a0 createIfNeeded:(BOOL)a1;
- (id)_initWithDistribution:(id)a0 pkgRefIdentifier:(id)a1;
- (void)_setDistribution:(id)a0;
- (void)_addPkgRefElement:(id)a0;
- (void)_removePkgRefElement:(id)a0;
- (id)_pkgRefElements;
- (void)_replacePkgRefIdentifier:(id)a0;
- (id)pkgRefIdentifier;
- (void)setPkgRefIdentifier:(id)a0;
- (BOOL)validatePkgRefIdentifier:(id *)a0 error:(id *)a1;
- (void)setPackageIdentifier:(id)a0;
- (id)_pkgRefElementForWriting:(BOOL)a0 passingBlock:(id /* block */)a1;
- (id)attributesAsDictionary;
- (id)_bundleVersionElementCreatingIfNeeded:(BOOL)a0;
- (id)bundleComponents;
- (void)setBundleComponents:(id)a0;
- (unsigned long long)countOfMustCloseApps;
- (id)objectInMustCloseAppsAtIndex:(unsigned long long)a0;
- (id)componentIdentifierToSearchIdentifierMap;
- (id)_distNameFromExternalName:(id)a0;
- (id)_externalValueFromDistValue:(id)a0 forExternalName:(id)a1;
- (id)_distValueFromExternalValue:(id)a0 forExternalName:(id)a1;

@end
