@class NSString;

@interface WFAutomatorWorkflowActionMigrationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *automatorActionIdentifier;
@property (nonatomic) char completed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
