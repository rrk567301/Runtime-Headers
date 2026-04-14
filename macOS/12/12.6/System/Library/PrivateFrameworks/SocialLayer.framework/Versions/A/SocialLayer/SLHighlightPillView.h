@class NSMenuItem, NSImageView, SLViewAllowingVibrancy, SLDisambiguationMenu, SLDHighlightPillEmptySlotContent, NSString, SLHighlight, NSVisualEffectView, SLDServiceProxy, NSSet, NSArray, UISSlotStyle, SLSlotView, NSColor;
@protocol SLHighlightPillViewDelegate;

@interface SLHighlightPillView : NSView <SLDServiceProxyDelegate, SLHighlightPillViewCrossPlatform>

@property (nonatomic) BOOL remoteContentIsLoaded;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLSlotView *slotView;
@property (retain, nonatomic) SLDHighlightPillEmptySlotContent *placeholderSlotContent;
@property (retain, nonatomic) SLDServiceProxy *pillProxy;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle;
@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (retain, nonatomic) SLViewAllowingVibrancy *opaqueBackgroundView;
@property (retain, nonatomic) NSImageView *chevronImageView;
@property (retain, nonatomic) NSArray *attributionIdentifiers;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers;
@property (retain, nonatomic) NSMenuItem *replyMenuItem;
@property (retain, nonatomic) NSMenuItem *hideMenuItem;
@property (retain, nonatomic) SLDisambiguationMenu *disambiguationMenu;
@property (retain, nonatomic) NSArray *chevronConstraints;
@property (weak, nonatomic) id<SLHighlightPillViewDelegate> delegate;
@property (nonatomic) BOOL remoteRenderingEnabled;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL shouldDrawBackgroundBlur;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) NSColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (double)_displayScale;
- (id)_attributionIdentifiers;
- (id)contextMenuItems;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (BOOL)shouldShowContextMenu;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (void)_setupBackgroundViews;
- (void)_configureChevronImageAndConstraintsForLastSlotStyle;
- (id)_finalSlotStyleForStyle:(id)a0;
- (id)_nsMenuItems;
- (BOOL)shouldShowReplyContextMenu;
- (void)_replyMenuItemSelected;
- (void)_hideMenuItemSelected;
- (void)pillClicked;
- (id)getContextMenu;
- (id)initWithHighlight:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2 shouldDrawBlur:(BOOL)a3;
- (double)expectedHeightForMaxWidth:(double)a0;

@end
