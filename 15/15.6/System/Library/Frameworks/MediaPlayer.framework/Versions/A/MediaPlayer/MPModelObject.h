@class NSArray, NSString, MPIdentifierSet, NSMutableDictionary;

@interface MPModelObject : NSObject <NSCopying, NSSecureCoding, NSObject> {
    NSMutableDictionary *_storage;
    char _isFinalized;
}

@property (class, readonly, nonatomic) long long genericObjectType;
@property (class, readonly, nonatomic) NSArray *classesForSecureCoding;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) MPIdentifierSet *originalIdentifierSet;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)resolveInstanceMethod:(SEL)a0;
+ (void)_indexProperties;
+ (char)_lookupPropertyForSelector:(SEL)a0 result:(id /* block */)a1;
+ (id)_modelKeyForPropertySelector:(SEL)a0;
+ (void)performWithoutEnforcement:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithIdentifiers:(id)a0;
- (id)mergeWithObject:(id)a0;
- (id)_stateDumpObject;
- (char)_isModelKey:(id)a0;
- (id)_sanitizedStorage;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)a0;
- (id)copyWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)copyWithIdentifiers:(id)a0 propertySet:(id)a1;
- (id)copyWithPropertySet:(id)a0;
- (char)hasLoadedValueForKey:(id)a0;
- (char)hasLoadedValuesForPropertySet:(id)a0;
- (id)initWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)mediaItemPropertyValues;
- (void)setValue:(id)a0 forModelKey:(id)a1;
- (id)valueForModelKey:(id)a0;

@end
