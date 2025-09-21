@class NSNumber, NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding> {
    long long _contactBatchCount;
}

@property (class, readonly) char supportsSecureCoding;

@property char disallowsEncodedFetch;
@property long long batchSize;
@property long long decoderBatchSize;
@property (readonly) unsigned long long serialNumber;
@property (readonly) unsigned long long signpostId;
@property (retain, nonatomic) NSNumber *keyboardState;
@property char rankSort;
@property char onlyMainStore;
@property char allowsBatching;
@property (nonatomic) char shouldFailIfAccountNotYetSynced;
@property (nonatomic) char alwaysUnifyLabeledValues;
@property long long contactBatchCount;
@property (copy) NSPredicate *predicate;
@property (copy) NSArray *keysToFetch;
@property char mutableObjects;
@property char unifyResults;
@property long long sortOrder;

+ (unsigned long long)makeSerialNumber;
+ (unsigned long long)makeSignpostId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeysToFetch:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate;
- (BOOL)requiresMeContactAuthorization;

@end
