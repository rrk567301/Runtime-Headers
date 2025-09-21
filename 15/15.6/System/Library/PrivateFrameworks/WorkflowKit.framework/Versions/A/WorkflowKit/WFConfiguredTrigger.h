@class NSString, NSData, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSData *selectedEntryMetadata;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) char shouldPrompt;
@property (readonly, nonatomic) char shouldNotify;
@property (readonly, nonatomic) char shouldRecur;
@property (readonly, nonatomic) char editableShortcut;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) int notificationLevel;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(char)a3 shouldNotify:(char)a4 shouldRecur:(char)a5 enabled:(char)a6 editableShortcut:(char)a7 selectedEntryMetadata:(id)a8;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(char)a3 shouldNotify:(char)a4 shouldRecur:(char)a5 enabled:(char)a6 triggerSource:(int)a7 notificationLevel:(int)a8 editableShortcut:(char)a9 selectedEntryMetadata:(id)a10;

@end
