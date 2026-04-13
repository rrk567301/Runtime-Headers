@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (long long)run;
- (id)description;
- (id)logDescription;
- (BOOL)_setupPlan;
- (BOOL)_resolveActions;
- (BOOL)_applyHints;
- (BOOL)_noteComponents;

@end
