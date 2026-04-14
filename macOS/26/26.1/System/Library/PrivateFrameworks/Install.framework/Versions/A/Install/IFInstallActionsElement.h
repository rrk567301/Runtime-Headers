@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement {
    IFInstallActionsGroup *_actions;
}

+ (BOOL)canRunForPackage:(id)a0;

- (long long)run;
- (id)logDescription;
- (void)dealloc;
- (id)init;
- (int)runTask:(id)a0;
- (id)actionsGroup;
- (id)pathForComponentId:(id)a0;
- (void)setActionsGroup:(id)a0;

@end
