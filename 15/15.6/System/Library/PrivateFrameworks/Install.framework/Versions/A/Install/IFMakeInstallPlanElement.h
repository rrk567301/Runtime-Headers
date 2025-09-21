@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (id)description;
- (long long)run;
- (id)logDescription;
- (char)_resolveActions;
- (char)_noteComponents;
- (char)_applyHints;
- (char)_setupPlan;

@end
