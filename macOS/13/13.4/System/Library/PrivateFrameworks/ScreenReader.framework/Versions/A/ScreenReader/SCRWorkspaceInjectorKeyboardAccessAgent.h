@interface SCRWorkspaceInjectorKeyboardAccessAgent : SCRWorkspaceInjectorScreenReader

+ (id)cursorAutoHideManager;
+ (BOOL)shouldObserveFunctionRow;
+ (BOOL)startedByKeyboardAccessAgent;
+ (id)visualsManager;

@end
