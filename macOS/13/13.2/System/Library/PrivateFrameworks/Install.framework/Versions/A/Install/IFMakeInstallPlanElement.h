@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (id)description;
- (long long)run;
- (id)logDescription;
- (BOOL)_setupPlan;
- (BOOL)_resolveActions;
- (BOOL)_applyHints;
- (BOOL)_noteComponents;

@end
