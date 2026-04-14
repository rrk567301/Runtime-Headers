@class NSArray, NSMutableDictionary;

@interface IASMultiClassSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *analyzerIdToAnalyzersMap;
@property (retain, nonatomic) NSArray *analyzerClasses;

- (void).cxx_destruct;
- (id)garbageCollect;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)periodic24HourEvents;
- (void)reportStatus;

@end
