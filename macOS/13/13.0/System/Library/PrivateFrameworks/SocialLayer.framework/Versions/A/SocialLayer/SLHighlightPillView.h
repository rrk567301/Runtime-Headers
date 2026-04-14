@class NSMenuItem, NSString, NSArray, SLViewAllowingVibrancy, NSVisualEffectView, SLHighlight, NSSet, NSColor, SLDisambiguationMenu, NSImageView;
@protocol SLHighlightPillViewDelegate;

@interface SLHighlightPillView : SLRemoteView <SLHighlightPillViewCrossPlatform>

@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (retain, nonatomic) SLViewAllowingVibrancy *opaqueBackgroundView;
@property (retain, nonatomic) NSImageView *chevronImageView;
@property (retain, nonatomic) NSArray *attributionIdentifiers;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers;
@property (retain, nonatomic) NSMenuItem *replyMenuItem;
@property (retain, nonatomic) NSMenuItem *hideMenuItem;
@property (retain, nonatomic) SLDisambiguationMenu *disambiguationMenu;
@property (retain, nonatomic) NSArray *contextMenuItems;
@property (retain, nonatomic) NSArray *chevronConstraints;
@property (weak, nonatomic) id<SLHighlightPillViewDelegate> delegate;
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
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (BOOL)shouldShowContextMenu;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (void)_replyMenuItemSelected;
- (void)_hideMenuItemSelected;
- (id)initWithHighlight:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2 shouldDrawBlur:(BOOL)a3;
- (double)expectedHeightForMaxWidth:(double)a0;
- (void)refreshContextMenuItems;
- (void)_setupBackgroundViews;
- (void)_configureChevronImageAndConstraintsForLastSlotStyle;
- (void)pillClicked;
- (void)remoteContentIsLoadedValueChanged;
- (BOOL)shouldInvalidatePreviousPlaceHolderSlotContent:(id)a0 forStyle:(id)a1;
- (BOOL)shouldShowReplyContextMenu;
- (id)_nsMenuItems;
- (id)getContextMenu;

@end
