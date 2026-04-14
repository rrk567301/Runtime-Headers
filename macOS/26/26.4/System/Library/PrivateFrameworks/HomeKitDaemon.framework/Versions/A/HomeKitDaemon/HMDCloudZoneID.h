@class CKContainerID, CKRecordZoneID;

@interface HMDCloudZoneID : HMFObject <NSCopying>

@property (readonly, copy) CKContainerID *containerID;
@property (readonly) long long scope;
@property (readonly, copy) CKRecordZoneID *zoneID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 zoneID:(id)a2;
- (id)initWithHMBCloudZoneID:(id)a0;

@end
