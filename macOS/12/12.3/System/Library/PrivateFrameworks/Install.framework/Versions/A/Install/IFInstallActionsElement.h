@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement {
    IFInstallActionsGroup *_actions;
}

+ (BOOL)canRunForPackage:(id)a0;

- (long long)run;
- (void)dealloc;
- (id)init;
- (int)runTask:(id)a0;
- (id)logDescription;
- (void)setActionsGroup:(id)a0;
- (id)pathForComponentId:(id)a0;
- (id)actionsGroup;

@end
