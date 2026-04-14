@class AXFWindowManagerController, SCRWindowManagerGroup;

@interface SCRWindowManagerApplication : SCRSystemApplication <AXFWindowManagerDataSource, AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate>

@property (retain, nonatomic) AXFWindowManagerController *wmController;
@property (retain, nonatomic) SCRWindowManagerGroup *_windowContainer;

- (void).cxx_destruct;
- (void)makeWindowKeyWithID:(unsigned int)a0;
- (id)titleForWindowID:(unsigned int)a0;
- (BOOL)windowIDIsValid:(unsigned int)a0;
- (id)windowIDsForProcess:(int)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_updateChildrenWithOutputRequest:(id)a0 event:(id)a1;
- (void)focusOut;
- (void)applicationDidInitialize;
- (BOOL)applicationNeedsWindows;
- (void)_focusOnStageManager;
- (void)_exitStageManager;
- (void)_updateChildrenWithDifferences:(id)a0;
- (id)_isStageManagerEmpty;
- (BOOL)isWindowManagerApplication;
- (void)dispatchFocusOnStageManager;
- (void)dispatchExitStageManager;
- (void)dispatchUpdateChildrenWithDifferences:(id)a0;
- (BOOL)dispatchIsStageManagerEmpty;

@end
