@class NSSet, NSUUID, NSArray;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer

@property (readonly, nonatomic) NSSet *changedCharacteristics;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) NSArray *postedBulletins;

- (id)initWithCameraSessionUUID:(id)a0 changedCharacteristics:(id)a1 timeInterval:(double)a2;
- (void).cxx_destruct;

@end
