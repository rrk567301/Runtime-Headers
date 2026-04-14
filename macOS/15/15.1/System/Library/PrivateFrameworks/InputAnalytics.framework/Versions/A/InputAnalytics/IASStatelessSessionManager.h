@class NSUUID;

@interface IASStatelessSessionManager : IASMultiClassSessionManager

@property (retain, nonatomic) NSUUID *genericAnalyzerId;

- (id)init;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;

@end
