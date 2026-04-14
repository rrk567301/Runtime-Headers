@class NSPredicate, NSString, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSPredicate *predicate;
@property (nonatomic) unsigned long long querySubscriptionOptions;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) CKRecordZoneID *zoneID;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setRecordType:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)CKPropertiesDescription;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (void)_validateQuerySubscriptionOptions:(unsigned long long)a0;

@end
