@class NSString, NSUUID, NSMutableSet, IASSessionManager;

@interface IASWritingToolsAnalyzer : NSObject <IASAnalyzerProtocol>

@property (retain, nonatomic) NSMutableSet *sessionErrors;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSUUID *analyzerSessionId;
@property (weak, nonatomic) IASSessionManager *sessionManagerDelegate;

- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldBeGarbageCollected;

@end
