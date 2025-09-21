@class TRIPersistedTaskAttribution;

@interface TRIRetargetAllPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;

+ (id)descriptor;

@end
