@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (id)logDescription;
- (long long)run;
- (id)description;
- (BOOL)_resolveActions;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_setupPlan;

@end
