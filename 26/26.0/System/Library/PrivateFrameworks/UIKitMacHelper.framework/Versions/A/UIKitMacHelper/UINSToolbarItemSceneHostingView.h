@class NSObject, NSString, NSToolbarItem;
@protocol NSISEngineDelegate;

@interface UINSToolbarItemSceneHostingView : UINSSceneHostingView <NSGlassAwareView, _NSToolbarItemLayoutWrapper> {
    NSObject<NSISEngineDelegate> *_secondaryEngineDelegate;
    unsigned long long _controlSize;
    BOOL _controlSizeWasSet;
}

@property unsigned long long controlSize;
@property (weak) NSToolbarItem *hostingItem;
@property (readonly) unsigned long long preferredGlassBehavior;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (weak) NSObject<NSISEngineDelegate> *secondaryEngineDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_shouldPrintByCallingDrawRect;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)wantsUpdateLayer;
- (id)engineHostingView;
- (void)innerViewDidChange;
- (void)innerViewWillChange;

@end
