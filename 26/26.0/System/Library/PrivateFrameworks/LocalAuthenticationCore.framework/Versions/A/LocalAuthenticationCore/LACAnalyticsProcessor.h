@class NSString, LACAnalyticsSession;

@interface LACAnalyticsProcessor : NSObject <LACEvaluationRequestProcessor> {
    LACAnalyticsSession *_analyticsSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_donateDialogEvent:(id)a0 request:(id)a1;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithAnalyticsSession:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
