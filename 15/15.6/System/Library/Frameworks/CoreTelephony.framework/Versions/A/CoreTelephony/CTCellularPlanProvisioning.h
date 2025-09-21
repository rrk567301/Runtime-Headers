@interface CTCellularPlanProvisioning : NSObject

@property (readonly, nonatomic) char supportsEmbeddedSIM;

- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (char)supportsCellularPlan;

@end
