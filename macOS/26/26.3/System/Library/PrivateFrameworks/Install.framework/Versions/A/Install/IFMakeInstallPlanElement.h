@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (long long)run;
- (id)description;
- (id)logDescription;
- (BOOL)_resolveActions;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_setupPlan;

@end
