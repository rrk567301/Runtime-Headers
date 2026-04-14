@class AXFWindowManagerController, SCRWindowManagerGroup;

@interface SCRWindowManagerApplication : SCRSystemApplication <AXFWindowManagerDataSource, AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate>

@property (retain) AXFWindowManagerController *wmController;
@property (retain, nonatomic) SCRWindowManagerGroup *_windowContainer;

- (void).cxx_destruct;
- (BOOL)windowIDIsValid:(unsigned int)a0;
- (id)windowIDsForProcess:(int)a0;
- (void)makeWindowKeyWithID:(unsigned int)a0;
- (id)titleForWindowID:(unsigned int)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_updateChildrenWithOutputRequest:(id)a0 event:(id)a1;
- (void)focusOut;
- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (id)newWindowsForGuideWithAppFocused:(BOOL)a0;
- (BOOL)applicationNeedsWindows;
- (void)dispatchShowDesktop;
- (void)dispatchHideDesktop;
- (void)_focusOnStageManager:(id)a0;
- (void)_exitStageManager;
- (void)_updateChildrenWithDifferences:(id)a0;
- (id)_isStageManagerEmpty;
- (void)_showDesktop;
- (void)_hideDesktop;
- (BOOL)isWindowManagerApplication;
- (void)dispatchFocusOnStageManager:(id)a0;
- (void)dispatchExitStageManager;
- (void)dispatchUpdateChildrenWithDifferences:(id)a0;
- (BOOL)dispatchIsStageManagerEmpty;

@end
