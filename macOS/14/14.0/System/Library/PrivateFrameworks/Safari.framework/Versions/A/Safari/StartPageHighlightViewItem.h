@class LPLinkView, NSString, StartPageHighlightViewItemMetadata, HighlightContentView, StartPageViewItemVisualEffect, NSView, SLAttributionView;
@protocol StartPageBackgroundImageIdentifierProvider, StartPageHighlightViewItemDelegate;

@interface StartPageHighlightViewItem : NSCollectionViewItem <HighlightContentViewDelegate> {
    HighlightContentView *_contentView;
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_boxShadow;
    SLAttributionView *_attributionView;
    LPLinkView *_linkView;
    long long _attributionBackgroundStyle;
}

@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (readonly, copy, nonatomic) NSString *highlightTitle;
@property (retain, nonatomic) StartPageHighlightViewItemMetadata *metadata;
@property (nonatomic) BOOL usesCompactAppearance;
@property (retain, nonatomic) id<StartPageHighlightViewItemDelegate> delegate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)rightMouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_makeContentView;
- (void)_sendFeedbackForHighlightIfNeccessary;
- (void)_showHighlightContextMenuWithEvent:(id)a0;
- (BOOL)_validateEvent:(id)a0 forView:(id)a1;
- (void)highlightContentView:(id)a0 didChangeClearState:(BOOL)a1;

@end
