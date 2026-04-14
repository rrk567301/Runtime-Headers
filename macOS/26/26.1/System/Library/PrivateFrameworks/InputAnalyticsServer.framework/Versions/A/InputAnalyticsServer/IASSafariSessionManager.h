@class IASSafariAnalyzer;

@interface IASSafariSessionManager : IASSessionManager

@property (retain, nonatomic) IASSafariAnalyzer *analyzer;

- (id)initWithQueue:(id)a0;
- (id)garbageCollect;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (void)beginSessionWithSignal:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldHandleSignal:(id)a0;
- (void)terminateSession:(id)a0;

@end
