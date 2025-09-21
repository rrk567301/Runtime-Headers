@class NSNumber, NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding> {
    long long _contactBatchCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL disallowsEncodedFetch;
@property long long batchSize;
@property long long decoderBatchSize;
@property (readonly) unsigned long long serialNumber;
@property (readonly) unsigned long long signpostId;
@property (retain, nonatomic) NSNumber *keyboardState;
@property BOOL rankSort;
@property BOOL onlyMainStore;
@property BOOL allowsBatching;
@property (nonatomic) BOOL shouldFailIfAccountNotYetSynced;
@property (nonatomic) BOOL alwaysUnifyLabeledValues;
@property long long contactBatchCount;
@property (copy) NSPredicate *predicate;
@property (copy) NSArray *keysToFetch;
@property BOOL mutableObjects;
@property BOOL unifyResults;
@property long long sortOrder;

+ (unsigned long long)makeSerialNumber;
+ (unsigned long long)makeSignpostId;

- (id)effectivePredicate;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectiveKeysToFetch;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeysToFetch:(id)a0;
- (BOOL)requiresMeContactAuthorization;
- (void).cxx_destruct;

@end
