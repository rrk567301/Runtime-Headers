@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement {
    IFInstallActionsGroup *_actions;
}

+ (BOOL)canRunForPackage:(id)a0;

- (void)dealloc;
- (id)init;
- (long long)run;
- (int)runTask:(id)a0;
- (id)logDescription;
- (void)setActionsGroup:(id)a0;
- (id)actionsGroup;
- (id)pathForComponentId:(id)a0;

@end
