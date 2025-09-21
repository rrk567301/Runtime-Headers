@class NSString, CKRecordZoneID;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy) NSString *recordType;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneID:(id)a0;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1;
- (void)setZoneID_modelMutation:(id)a0;

@end
