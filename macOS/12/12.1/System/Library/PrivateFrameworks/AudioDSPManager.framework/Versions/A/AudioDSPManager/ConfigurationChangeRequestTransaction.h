@class SystemStateAdaptTransaction, GraphManager, SystemStateManager, GraphManagerAdaptTransaction;

@interface ConfigurationChangeRequestTransaction : NSObject {
    GraphManager *_graphManager;
    SystemStateManager *_systemStateManager;
}

@property (readonly, nonatomic) GraphManagerAdaptTransaction *graphManagerTransaction;
@property (readonly, nonatomic) SystemStateAdaptTransaction *systemStateTransaction;

- (void).cxx_destruct;
- (void)reset;
- (void)setGraphTransaction:(id)a0;
- (void)setSystemStateTransaction:(id)a0;
- (id)initWithGraphMananger:(id)a0 andSystemStateManager:(id)a1;
- (BOOL)hasCompleteTransaction;
- (BOOL)applyCurrentTransaction;

@end
