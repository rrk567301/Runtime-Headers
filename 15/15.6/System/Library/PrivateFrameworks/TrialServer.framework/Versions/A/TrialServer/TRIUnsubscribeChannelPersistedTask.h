@class NSString, TRIPBTimestamp;

@interface TRIUnsubscribeChannelPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) char hasStartTimestamp;

+ (id)descriptor;

@end
