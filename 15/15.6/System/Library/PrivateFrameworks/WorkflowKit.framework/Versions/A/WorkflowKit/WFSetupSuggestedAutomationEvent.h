@class NSString;

@interface WFSetupSuggestedAutomationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic) char completed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
