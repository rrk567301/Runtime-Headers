@class NSString, CKDistributedTimestampClockVector, CKDistributedTimestampStateVector;

@interface CKAtomBatchMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) CKDistributedTimestampClockVector *previousVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector;
@property (readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector;

+ (id)replacementBatchMetadatasForBatchDirectory:(id)a0 withMergeableValuePreviousStateVector:(id)a1 currentStateVector:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviousStateVector:(id)a0 currentStateVector:(id)a1;
- (id)initWithIdentifier:(id)a0 previousVector:(id)a1 contentsVector:(id)a2 removalsVector:(id)a3 dependenciesVector:(id)a4;
- (id)initWithIdentifier:(id)a0 previousStateVector:(id)a1 currentStateVector:(id)a2;
- (BOOL)_validate:(id *)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (BOOL)isEqualToBatchMetadata:(id)a0;

@end
