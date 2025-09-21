@class NSUUID;

@interface IASStatelessSessionManager : IASMultiClassSessionManager

@property (retain, nonatomic) NSUUID *genericAnalyzerId;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;

@end
