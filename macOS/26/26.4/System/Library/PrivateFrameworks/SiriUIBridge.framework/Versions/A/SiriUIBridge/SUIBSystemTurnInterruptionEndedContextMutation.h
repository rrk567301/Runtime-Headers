@class NSUUID;

@interface SUIBSystemTurnInterruptionEndedContextMutation : NSObject

@property (copy, nonatomic) NSUUID *userTurnID;
@property (nonatomic) unsigned long long mitigationResult;

- (void).cxx_destruct;

@end
