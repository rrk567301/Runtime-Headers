@class NSString, NSView, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI20DynamicTypeTextField, _TtC12GameCenterUI13SeparatorView;

@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ titleObservation;
    void /* unknown type, empty encoding */ titleAccessoryHiddenObservation;
    void /* unknown type, empty encoding */ accessoryHiddenObservation;
    void /* unknown type, empty encoding */ titleAccessory;
    void /* unknown type, empty encoding */ subtitleAccessory;
    void /* unknown type, empty encoding */ accessoryType;
    void /* function */ accessoryAction;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ cachedIntrinsicContentSize;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } iconSize;
@property (class, nonatomic, readonly) double accessoryMargin;

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabelView;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *subtitleLabelView;
@property (nonatomic, readonly) _TtC12GameCenterUI13SeparatorView *separatorView;
@property (nonatomic, retain) NSView *titleAccessoryView;
@property (nonatomic, retain) NSView *subtitleAccessoryView;
@property (nonatomic, retain) NSView *accessoryView;
@property (nonatomic, copy) id /* block */ accessoryAction;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, retain) _TtC12GameCenterUI11ArtworkView *iconArtworkView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (struct CGSize { double x0; double x1; })sizeFitting:(struct CGSize { double x0; double x1; })a0 forTitle:(id)a1 subtitle:(id)a2 kind:(long long)a3 accessorySize:(struct CGSize { double x0; double x1; })a4 layoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a5 inTraitEnvironment:(id)a6;

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)accessibilityTitleUIElement;
- (void)jet_traitCollectionDidChange:(id)a0;
- (void)didTapWithAccessoryView:(id)a0;

@end
