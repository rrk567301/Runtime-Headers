@class NSSet, NSUUID, NSArray;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer

@property (readonly, nonatomic) NSSet *changedCharacteristics;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) NSArray *postedBulletins;

- (void).cxx_destruct;
- (id)initWithCameraSessionUUID:(id)a0 changedCharacteristics:(id)a1 timeInterval:(double)a2;

@end
