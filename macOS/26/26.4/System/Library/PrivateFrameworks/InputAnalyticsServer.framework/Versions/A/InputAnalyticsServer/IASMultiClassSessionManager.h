@class NSArray, NSMutableDictionary;

@interface IASMultiClassSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *analyzerIdToAnalyzersMap;
@property (retain, nonatomic) NSArray *analyzerClasses;

- (id)garbageCollect;
- (void).cxx_destruct;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;

@end
