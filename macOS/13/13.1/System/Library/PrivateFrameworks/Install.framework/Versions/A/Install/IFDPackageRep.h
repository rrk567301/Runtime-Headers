@interface IFDPackageRep : NSObject <NSCopying> {
    struct IFDPackageRep_Private { id x0; id x1; id x2; int x3; id x4; id x5; id x6; id x7; id x8; BOOL x9; } *_private;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (id)identifier;
- (id)uniqueIdentifier;
- (id)version;
- (BOOL)isActive;
- (id)location;
- (id)dictionaryRepresentation;
- (unsigned int)order;
- (id)filename;
- (void)setActive:(BOOL)a0;
- (id)componentIdentifiers;
- (BOOL)isSelfContained;
- (int)requiredAuthorization;
- (void)addDigest:(id)a0;
- (long long)compareOrder:(id)a0;
- (void)setResolvedPath:(id)a0 forComponent:(id)a1;
- (id)resolvedPathForComponent:(id)a0;
- (void)setShouldBackRev:(BOOL)a0;
- (BOOL)shouldBackRev;
- (int)requiredPostInstallAction;
- (id)initWithPackage:(id)a0 atLocation:(id)a1;
- (id)locationsIncludingChildren;
- (id)subpackages;
- (BOOL)isRelocatable;
- (id)defaultRelocatableLocation;
- (unsigned long long)installKBytes;
- (unsigned long long)archiveKBytes;
- (id)normalizedVersion;
- (id)locatorPathMappings;
- (id)locatorTokenDefinitions;
- (id)packageSpecifier;
- (void)setPackageSpecifier:(id)a0;
- (id)hashTypes;
- (id)hashOfType:(id)a0;
- (void)setSearchID:(id)a0 forComponentIdentifier:(id)a1;
- (id)searchIDForComponentIdentifier:(id)a0;
- (id)versionAttributesForComponentIdentifier:(id)a0;
- (void)setVersionAttributes:(id)a0 forComponentIdentifier:(id)a1;
- (void)setSelfContained:(BOOL)a0;
- (id)mustCloseApps;
- (void)setMustCloseApps:(id)a0;
- (id)resolveComponentIDs;

@end
