@class NSString, WFTrigger, NSData;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) int source;
@property (readonly, copy, nonatomic) NSData *suggestionData;
@property (readonly, nonatomic) int notificationLevel;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 enabled:(BOOL)a5 triggerSource:(int)a6 suggestionData:(id)a7 notificationLevel:(int)a8;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 enabled:(BOOL)a5;

@end
