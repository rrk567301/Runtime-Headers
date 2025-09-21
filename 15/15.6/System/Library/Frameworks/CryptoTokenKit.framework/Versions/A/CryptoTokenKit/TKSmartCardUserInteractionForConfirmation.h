@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak) TKSmartCardSlot *slot;
@property char result;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;

@end
