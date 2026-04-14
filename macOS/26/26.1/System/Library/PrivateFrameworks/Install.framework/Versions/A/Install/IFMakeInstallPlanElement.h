@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (long long)run;
- (id)logDescription;
- (id)description;
- (BOOL)_resolveActions;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_setupPlan;

@end
