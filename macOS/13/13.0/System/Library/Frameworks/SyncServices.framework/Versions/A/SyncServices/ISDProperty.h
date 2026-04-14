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
- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (void)setType:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)setName:(id)a0;
- (id)displayName;
- (id)subtype;
- (id)bundle;
- (void)setSubtype:(id)a0;
- (id)fullName;
- (BOOL)isToMany;
- (BOOL)isRelationship;
- (void)setRequired:(BOOL)a0;
- (BOOL)isRequired;
- (BOOL)morphInToObject:(id)a0;
- (id)bundleRef;
- (void)setBundleRef:(id)a0;
- (id)uiHelperClassName;
- (void)setUIHelperClassName:(id)a0;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (id)fastName;
- (BOOL)excludeFromAirbagCount;
- (void)setExcludeFromAirbagCount:(BOOL)a0;
- (Class)uiHelperClass;
- (id)enumValues;
- (id)initWithName:(id)a0 entity:(id)a1;
- (void)setEnumValues:(id)a0;
- (id)automagicConflictResolverClassName;
- (void)setAutomagicConflictResolverClassName:(id)a0;
- (BOOL)isIdentityKey;
- (BOOL)isIdentityKeyForAlternative:(int)a0;
- (void)setIdentityKey:(BOOL)a0;
- (int)identityAlternative;
- (void)setIdentityAlternative:(int)a0;
- (BOOL)isMatchable;
- (void)setIsMatchable:(BOOL)a0;
- (Class)automagicConflictResolverClass;
- (id)displayNameForEnumValue:(id)a0;
- (int)preferredRecordTypeForAutomaticConflictResolution;
- (void)setPreferredRecordTypeForAutomaticConflictResolution:(int)a0;
- (id)preferredClientTypesForAutomaticConflictResolution;
- (void)setPreferredClientTypesForAutomaticConflictResolution:(id)a0;
- (id)fastSubtype;

@end
