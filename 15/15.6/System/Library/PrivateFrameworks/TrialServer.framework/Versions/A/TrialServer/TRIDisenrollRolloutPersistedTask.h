@class NSString;

@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int triggerEvent;
@property (nonatomic) char hasTriggerEvent;

+ (id)descriptor;

@end
