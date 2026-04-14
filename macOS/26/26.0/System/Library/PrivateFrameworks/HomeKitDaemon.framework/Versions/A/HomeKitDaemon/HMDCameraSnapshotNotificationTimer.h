@class NSSet, NSString, NSArray;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer

@property (readonly, nonatomic) NSSet *changedCharacteristics;
@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSArray *postedBulletins;

- (id)initWithCameraSessionID:(id)a0 changedCharacteristics:(id)a1 timeInterval:(double)a2;
- (void).cxx_destruct;

@end
