@class NSPredicate, NSString, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSPredicate *predicate;
@property (nonatomic) unsigned long long querySubscriptionOptions;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (copy) CKRecordZoneID *zoneID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;
- (void)_validateQuerySubscriptionOptions:(unsigned long long)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;

@end
