@interface VideosUI.VUIJSStackProxy : NSObject <VUIAppStackProtocolObjC> {
    void /* unknown type, empty encoding */ appStack;
}

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletion:(id /* block */)a0;
- (void)evaluate:(id /* block */)a0 completionBlock:(id /* block */)a1 completionQueue:(id)a2;
- (void)performRequest:(id)a0 function:(id)a1 params:(id)a2 completionHandler:(id /* block */)a3 completionQueue:(id)a4;

@end
