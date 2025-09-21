@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<TKSmartCardUserInteractionDelegate> delegate;
@property double initialTimeout;
@property double interactionTimeout;

- (BOOL)cancel;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)runWithReply:(id /* block */)a0;

@end
