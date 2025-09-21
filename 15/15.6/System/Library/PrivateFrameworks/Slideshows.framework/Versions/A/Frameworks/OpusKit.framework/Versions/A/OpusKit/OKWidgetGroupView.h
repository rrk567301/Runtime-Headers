@class OKTransition, NSString, NSArray, NSMutableDictionary, OKWidgetView, OFNSView;

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports> {
    long long _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    char _autoplay;
    char _loop;
    double _itemDuration;
    char _isInTransition;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _itemEdgeInsets;
    OFNSView *_itemContainerView;
}

@property (readonly, nonatomic) char isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (void)_stop;
- (void)_play;
- (void)prepareForReload;
- (char)prepareForDisplay:(char)a0;
- (id)initWithWidget:(id)a0;
- (id)_nextWidgetView;
- (void)setSettingLoop:(char)a0;
- (void)_gotoIndex:(long long)a0;
- (void)_gotoNextIndex;
- (void)_jsGotoIndex:(long long)a0;
- (void)_jsTransitionToIndex:(long long)a0 forward:(char)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_jsTransitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareAllForUnload:(char)a0 except:(id)a1;
- (id)_previousWidgetView;
- (void)_reloadWidgetViews;
- (void)_transitionToIndex:(long long)a0 forward:(char)a1 andLocation:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)_transitionToIndex:(long long)a0 withTransition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateDisplayedWidgetViews;
- (id)_widgetViewForIndex:(long long)a0;
- (id)collectionItemAtIndexPath:(id)a0;
- (id)collectionItemForName:(id)a0;
- (unsigned long long)collectionItemsCount;
- (id)collectionItemsNames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemContainerRect;
- (id)layoutSettingsKeys;
- (void)prepareForRefresh;
- (char)prepareForUnload:(char)a0;
- (char)prepareForWarmup:(char)a0;
- (long long)rotatedIndexForIndex:(long long)a0;
- (void)setAntialiasing:(char)a0;
- (void)setSettingAutoplay:(char)a0;
- (void)setSettingIndex:(long long)a0;
- (void)setSettingItemDuration:(double)a0;
- (void)setSettingItemEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingItems:(id)a0;
- (void)setSettingSwitchActionScript:(id)a0;
- (void)setSettingTransition:(id)a0;
- (long long)settingIndex;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })settingItemEdgeInsets;
- (id)settingObjectForKey:(id)a0;
- (id)settingTransition;

@end
