@class NSObject;
@protocol OS_dispatch_queue, ISDialogDelegate;

@interface ISDialogDelegateProxy : NSObject <ISDialogDelegate>

@property (retain) id<ISDialogDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dialog:(id)a0 shouldDismissWithReturnCode:(long long)a1 replyBlock:(id /* block */)a2;

@end
