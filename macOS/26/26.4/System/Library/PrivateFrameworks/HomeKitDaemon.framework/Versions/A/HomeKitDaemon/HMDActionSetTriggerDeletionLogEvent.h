@interface HMDActionSetTriggerDeletionLogEvent : HMMLogEvent

@property (readonly, nonatomic, getter=isActionDeleted) BOOL actionDeleted;
@property (readonly, nonatomic, getter=isEventDeleted) BOOL eventDeleted;

+ (void)submitActionTriggerDeletionLogEventForAccessory:(id)a0 auditTransaction:(id)a1 logEventSubmitter:(id)a2;

- (id)initWithActionDeleted:(BOOL)a0 eventDeleted:(BOOL)a1;

@end
