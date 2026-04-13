@class LPLinkView, NSString, StartPageHighlightViewItemMetadata, HighlightContentView, StartPageViewItemVisualEffect, NSView, SLAttributionView;
@protocol StartPageHighlightViewItemDelegate;

@interface StartPageHighlightViewItem : NSCollectionViewItem <HighlightContentViewDelegate> {
    HighlightContentView *_contentView;
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_boxShadow;
    SLAttributionView *_attributionView;
    LPLinkView *_linkView;
    long long _attributionBackgroundStyle;
}

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
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)loadView;
- (void)rightMouseDown:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)highlightContentView:(id)a0 didChangeClearState:(BOOL)a1;
- (void)_makeContentView;
- (void)_sendFeedbackForHighlightIfNeccessary;
- (BOOL)_validateEvent:(id)a0 forView:(id)a1;
- (void)_showHighlightContextMenuWithEvent:(id)a0;

@end
