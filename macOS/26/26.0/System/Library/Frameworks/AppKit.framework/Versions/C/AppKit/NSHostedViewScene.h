@class NSView, NSWindow, NSArray;

@interface NSHostedViewScene : NSScene <FBSSceneObserver> {
    void /* function */ observers;
}

@property (nonatomic, retain) NSView *view;
@property (nonatomic, retain) NSWindow *offscreenWindow;
@property (nonatomic) BOOL invalid;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic) BOOL scheduledViewHierarchyUpdate;

- (void)invalidate;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void).cxx_destruct;
- (void)_updateAccessibilityChildren;
- (void)scene:(id)a0 didUpdateHostHandle:(id)a1;
- (void)sceneWillInvalidate:(id)a0;
- (void)viewHierarchyDidChange;

@end
