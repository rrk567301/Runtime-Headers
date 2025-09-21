@interface CTCellularPlanProvisioning : NSObject

@property (readonly, nonatomic) BOOL supportsEmbeddedSIM;

- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (void)addPlanWith:(id)a0 properties:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsCellularPlan;
- (void)updateCellularPlanProperties:(id)a0 completionHandler:(id /* block */)a1;

@end
