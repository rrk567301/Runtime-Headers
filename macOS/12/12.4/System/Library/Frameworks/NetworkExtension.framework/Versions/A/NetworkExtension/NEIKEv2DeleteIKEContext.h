@class NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext

@property (nonatomic) BOOL responseNeeded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;

- (id)description;
- (void).cxx_destruct;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;
- (id)initDeleteIKEWithResponse:(BOOL)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;

@end
