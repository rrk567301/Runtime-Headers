@class HMDProcessInfo, HMDCameraSnapshotSessionID;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>

@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) HMDProcessInfo *processInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 processInfo:(id)a1;

@end
