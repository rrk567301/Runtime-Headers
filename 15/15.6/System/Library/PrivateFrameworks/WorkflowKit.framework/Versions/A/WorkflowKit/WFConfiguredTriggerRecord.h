@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

@property (copy, nonatomic) NSData *triggerData;
@property (copy, nonatomic) NSData *selectedEntryMetadata;
@property (nonatomic) char shouldPrompt;
@property (nonatomic) char shouldNotify;
@property (nonatomic) char shouldRecur;
@property (nonatomic) char editableShortcut;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) int source;
@property (nonatomic) int notificationLevel;

- (void).cxx_destruct;

@end
