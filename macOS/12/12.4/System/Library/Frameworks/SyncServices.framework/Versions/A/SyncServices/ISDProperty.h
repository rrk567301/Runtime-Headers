@class NSString, NSArray, ISDFileReference;

@interface ISDProperty : ISDDataObject <NSCoding, ISyncConflictPropertyType> {
    NSString *_name;
    NSString *_fullName;
    NSString *_type;
    NSString *_subtype;
    NSArray *_enumValues;
    ISDFileReference *_bundleRef;
    NSString *_uiHelperClassName;
    NSString *_automagicConflictResolverClassName;
    NSArray *_preferredClientTypesForAutomagicResolution;
    struct { unsigned char identityKey : 1; unsigned char required : 1; unsigned char excludeFromAirbagCount : 1; unsigned char recordTypeForAutomagicResolution : 3; unsigned char deleteRule : 1; unsigned char toMany : 1; unsigned char ordering : 2; unsigned char isMatchable : 1; unsigned char identityAlternative : 5; } _flags;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (void)setType:(id)a0;
- (void)setName:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)displayName;
- (id)subtype;
- (id)bundle;
- (id)fullName;
- (BOOL)isToMany;
- (void)setSubtype:(id)a0;
- (BOOL)isRelationship;
- (void)setRequired:(BOOL)a0;
- (BOOL)isRequired;
- (id)fastName;
- (id)bundleRef;
- (BOOL)morphInToObject:(id)a0;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (id)uiHelperClassName;
- (void)setBundleRef:(id)a0;
- (void)setUIHelperClassName:(id)a0;
- (id)initWithName:(id)a0 entity:(id)a1;
- (void)setAutomagicConflictResolverClassName:(id)a0;
- (void)setEnumValues:(id)a0;
- (void)setExcludeFromAirbagCount:(BOOL)a0;
- (void)setPreferredClientTypesForAutomaticConflictResolution:(id)a0;
- (void)setPreferredRecordTypeForAutomaticConflictResolution:(int)a0;
- (void)setIdentityKey:(BOOL)a0;
- (void)setIsMatchable:(BOOL)a0;
- (BOOL)isMatchable;
- (void)setIdentityAlternative:(int)a0;
- (BOOL)excludeFromAirbagCount;
- (id)enumValues;
- (id)displayNameForEnumValue:(id)a0;
- (Class)uiHelperClass;
- (BOOL)isIdentityKey;
- (id)fastSubtype;
- (int)identityAlternative;
- (int)preferredRecordTypeForAutomaticConflictResolution;
- (id)preferredClientTypesForAutomaticConflictResolution;
- (id)automagicConflictResolverClassName;
- (BOOL)isIdentityKeyForAlternative:(int)a0;
- (Class)automagicConflictResolverClass;

@end
