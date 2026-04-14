@class NSString, CKRecordZoneID, CKRecordID;

@interface CKDAnonymousShareTuple : NSObject <NSSecureCoding, NSCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy, nonatomic) CKRecordID *shareID;
@property (readonly, copy, nonatomic) CKRecordZoneID *parentZoneID;
@property (copy) NSString *ckAnonymousShareHashIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0 shareID:(id)a1 parentZoneID:(id)a2;

@end
