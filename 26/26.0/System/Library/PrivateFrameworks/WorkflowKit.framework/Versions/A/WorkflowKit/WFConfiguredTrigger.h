@class NSString, NSData, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSData *selectedEntryMetadata;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (readonly, nonatomic) BOOL shouldRecur;
@property (readonly, nonatomic) BOOL potentialLoopDetected;
@property (readonly, nonatomic) BOOL editableShortcut;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *disablementReason;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) int notificationLevel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 shouldRecur:(BOOL)a5 potentialLoopDetected:(BOOL)a6 enabled:(BOOL)a7 disablementReason:(id)a8 editableShortcut:(BOOL)a9 selectedEntryMetadata:(id)a10;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 shouldRecur:(BOOL)a5 potentialLoopDetected:(BOOL)a6 enabled:(BOOL)a7 disablementReason:(id)a8 triggerSource:(int)a9 notificationLevel:(int)a10 editableShortcut:(BOOL)a11 selectedEntryMetadata:(id)a12;

@end
