@class NSString, TRIPBTimestamp;

@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (nonatomic) char forceUpdate;
@property (nonatomic) char hasForceUpdate;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) char hasDeviceId;
@property (retain, nonatomic) TRIPBTimestamp *nextRotationTimestamp;
@property (nonatomic) char hasNextRotationTimestamp;

+ (id)descriptor;

@end
