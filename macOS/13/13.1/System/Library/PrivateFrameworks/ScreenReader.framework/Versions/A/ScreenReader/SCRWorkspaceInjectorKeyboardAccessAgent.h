@interface SCRWorkspaceInjectorKeyboardAccessAgent : SCRWorkspaceInjectorScreenReader

+ (id)visualsManager;
+ (BOOL)shouldObserveFunctionRow;
+ (id)cursorAutoHideManager;
+ (BOOL)startedByKeyboardAccessAgent;

@end
