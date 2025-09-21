@class AXFWindowManagerController, SCRWindowManagerGroup;

@interface SCRWindowManagerApplication : SCRSystemApplication <AXFWindowManagerDataSource, AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate>

@property (retain) AXFWindowManagerController *wmController;
@property (retain, nonatomic) SCRWindowManagerGroup *_windowContainer;

- (void).cxx_destruct;
- (void)makeWindowKeyWithID:(unsigned int)a0;
- (id)titleForWindowID:(unsigned int)a0;
- (char)windowIDIsValid:(unsigned int)a0;
- (id)windowIDsForProcess:(int)a0;
- (void)_updateChildrenWithDifferences:(id)a0;
- (void)_exitStageManager;
- (void)_focusOnStageManager:(id)a0;
- (void)_hideDesktop;
- (id)_isStageManagerEmpty;
- (void)_showDesktop;
- (void)_updateChildrenWithOutputRequest:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (char)applicationNeedsWindows;
- (void)applicationWillInvalidate;
- (void)dispatchExitStageManager;
- (void)dispatchFocusOnStageManager:(id)a0;
- (void)dispatchHideDesktop;
- (char)dispatchIsStageManagerEmpty;
- (void)dispatchShowDesktop;
- (void)dispatchUpdateChildrenWithDifferences:(id)a0;
- (char)focusInto:(id)a0 event:(id)a1;
- (void)focusOut;
- (char)isWindowManagerApplication;
- (id)newWindowsForGuideWithAppFocused:(char)a0;

@end
