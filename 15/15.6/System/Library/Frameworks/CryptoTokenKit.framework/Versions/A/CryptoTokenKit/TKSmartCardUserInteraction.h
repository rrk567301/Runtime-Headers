@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak) id<TKSmartCardUserInteractionDelegate> delegate;
@property double initialTimeout;
@property double interactionTimeout;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)cancel;
- (void)runWithReply:(id /* block */)a0;

@end
