@class NSArray, NSMutableDictionary;

@interface IASMultiClassSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *analyzerIdToAnalyzersMap;
@property (retain, nonatomic) NSArray *analyzerClasses;

- (id)garbageCollect;
- (void).cxx_destruct;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;

@end
