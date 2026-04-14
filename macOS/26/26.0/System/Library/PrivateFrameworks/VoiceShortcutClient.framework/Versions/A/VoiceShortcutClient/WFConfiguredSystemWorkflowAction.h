@class NSString, WFWorkflowIcon;

@interface WFConfiguredSystemWorkflowAction : WFConfiguredSystemAction

@property (copy, nonatomic) NSString *workflowIdentifier;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 workflowIdentifier:(id)a1 workflowIcon:(id)a2 associatedBundleIdentifier:(id)a3 shortcutsMetadata:(id)a4;
- (id)initWithName:(id)a0 workflowIdentifier:(id)a1 workflowIcon:(id)a2 associatedBundleIdentifier:(id)a3 shortcutsMetadata:(id)a4 colorScheme:(id)a5;
- (id)initWithWorkflow:(id)a0 shortcutsMetadata:(id)a1;
- (id)initWithWorkflow:(id)a0 shortcutsMetadata:(id)a1 colorScheme:(id)a2;
- (id)previewIcon;

@end
