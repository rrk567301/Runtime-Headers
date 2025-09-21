@class NSString;

@interface WFPersonalAutomationSuggestionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) char visible;
@property (nonatomic) char interacted;
@property (nonatomic) char completed;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *triggerType;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
