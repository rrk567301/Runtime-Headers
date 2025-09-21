@class WFDialogButton, INInteraction;

@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0 attribution:(id)a1;
- (id)initWithInteraction:(id)a0 prompt:(id)a1;

@end
