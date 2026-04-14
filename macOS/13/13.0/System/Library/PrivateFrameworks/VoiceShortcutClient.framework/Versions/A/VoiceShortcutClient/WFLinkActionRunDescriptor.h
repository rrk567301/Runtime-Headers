@class LNActionMetadata, LNFullyQualifiedActionIdentifier, LNAction;

@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *identifier;
@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionMetadata *metadata;
@property (readonly, nonatomic) BOOL isAutoShortcut;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 action:(id)a1 metadata:(id)a2 isAutoShortcut:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 action:(id)a1 metadata:(id)a2;

@end
