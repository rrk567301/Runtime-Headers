@class WFDialogButton, INInteraction;

@interface WFConfirmInteractionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *confirmButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0 prompt:(id)a1;

@end
