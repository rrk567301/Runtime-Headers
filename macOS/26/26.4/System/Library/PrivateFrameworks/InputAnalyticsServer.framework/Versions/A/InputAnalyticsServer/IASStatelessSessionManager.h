@class NSUUID, NSArray, NSMutableDictionary, NSMutableArray;

@interface IASStatelessSessionManager : IASMultiClassSessionManager

@property (retain, nonatomic) NSUUID *genericAnalyzerId;
@property (retain, nonatomic) NSArray *regularAnalyzerClasses;
@property (retain, nonatomic) NSMutableArray *noBufferAnalyzerClasses;
@property (retain, nonatomic) NSMutableDictionary *noBufferAnalyzerIdToAnalyzersMap;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (void)bufferAction:(id)a0;
- (void)didActionNoBuffer:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;

@end
