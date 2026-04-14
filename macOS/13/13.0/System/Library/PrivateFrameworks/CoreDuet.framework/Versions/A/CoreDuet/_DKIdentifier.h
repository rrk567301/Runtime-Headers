@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property (retain) NSString *stringValue;
@property (retain) _DKIdentifierType *identifierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)entityName;
+ (id)identifierWithString:(id)a0 type:(id)a1;
+ (id)fromPBCodable:(id)a0;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)_identifierFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;

- (BOOL)isEqual:(id)a0;
- (double)doubleValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)integerValue;
- (void).cxx_destruct;
- (long long)typeCode;
- (long long)compareValue:(id)a0;
- (id)primaryValue;
- (id)objectType;
- (id)initWithString:(id)a0 type:(id)a1;
- (id)toPBCodable;
- (BOOL)copyToManagedObject:(id)a0;

@end
