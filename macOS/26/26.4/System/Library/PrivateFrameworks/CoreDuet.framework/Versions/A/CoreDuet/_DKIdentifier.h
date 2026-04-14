@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property (retain) NSString *stringValue;
@property (retain) _DKIdentifierType *identifierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (BOOL)supportsSecureCoding;
+ (id)fromPBCodable:(id)a0;
+ (id)_identifierFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)identifierWithString:(id)a0 type:(id)a1;

- (id)toPBCodable;
- (double)doubleValue;
- (long long)integerValue;
- (id)initWithString:(id)a0 type:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (void).cxx_destruct;
- (long long)compareValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)typeCode;
- (id)primaryValue;
- (id)objectType;

@end
