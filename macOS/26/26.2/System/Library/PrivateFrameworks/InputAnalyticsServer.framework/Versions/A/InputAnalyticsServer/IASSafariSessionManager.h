@class IASSafariAnalyzer;

@interface IASSafariSessionManager : IASSessionManager

@property (retain, nonatomic) IASSafariAnalyzer *analyzer;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)garbageCollect;
- (void)didAction:(id)a0;
- (void)beginSessionWithSignal:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldHandleSignal:(id)a0;
- (void)terminateSession:(id)a0;

@end
