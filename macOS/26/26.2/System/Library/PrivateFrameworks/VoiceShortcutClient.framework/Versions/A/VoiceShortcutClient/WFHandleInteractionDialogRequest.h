@class WFDialogButton, INInteraction;

@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInteraction:(id)a0 attribution:(id)a1;
- (id)initWithInteraction:(id)a0 prompt:(id)a1;

@end
