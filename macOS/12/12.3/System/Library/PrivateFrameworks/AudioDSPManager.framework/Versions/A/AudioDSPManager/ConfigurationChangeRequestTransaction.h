@class SystemStateAdaptTransaction, GraphManager, SystemStateManager, GraphManagerAdaptTransaction;

@interface ConfigurationChangeRequestTransaction : NSObject {
    GraphManager *_graphManager;
    SystemStateManager *_systemStateManager;
}

@property (readonly, nonatomic) GraphManagerAdaptTransaction *graphManagerTransaction;
@property (readonly, nonatomic) SystemStateAdaptTransaction *systemStateTransaction;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithGraphMananger:(id)a0 andSystemStateManager:(id)a1;
- (void)setGraphTransaction:(id)a0;
- (void)setSystemStateTransaction:(id)a0;
- (BOOL)hasCompleteTransaction;
- (BOOL)applyCurrentTransaction;

@end
