@class NSArray, NSString, NSObject, SCRGuide;
@protocol AXVAMenuWindowInterface, OS_dispatch_queue;

@interface SCRVisualsMenuWindow : NSObject <AXVMenuWindowMouseEventDelegate> {
    NSObject<OS_dispatch_queue> *_menuWindowSerialQueue;
}

@property (retain, nonatomic, setter=_setMenuAgent:) id<AXVAMenuWindowInterface> _menuAgent;
@property (copy, setter=_setMenuItems:) NSArray *_menuItems;
@property (copy, setter=_setAddedMenuItems:) NSArray *_addedMenuItems;
@property (nonatomic, setter=_setMenuItemsReplaced:) BOOL _menuItemsReplaced;
@property (nonatomic, setter=_setMenuTitleUpdated:) BOOL _menuTitleUpdated;
@property (nonatomic, setter=_setShowContent:) BOOL _showContent;
@property (nonatomic) BOOL enabled;
@property (copy) NSString *title;
@property (copy) NSArray *items;
@property (retain, nonatomic) SCRGuide *guideForMenu;
@property long long rowCountToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addItems:(id)a0;
- (void)selectMenuItemAtIndex:(long long)a0;
- (void)showMenuWindow;
- (void)hideMenuWindow;
- (void)mouseDownOnMenuItem:(id)a0 atRowIndex:(long long)a1;
- (void)setMenuFontSize:(double)a0;
- (void)refreshMenuIfNeeded;
- (id)initWithMenuAgent:(id)a0;
- (id)_convertSCRItemsToAXVItems:(id)a0;
- (BOOL)_shouldReplaceLastItemWhenAddingItems;
- (void)_refreshDisplayedMenuItems:(id)a0;

@end
