@protocol AMSUIWebProtocolDelegate;

@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler

@property (weak) id<AMSUIWebProtocolDelegate> delegate;

- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
