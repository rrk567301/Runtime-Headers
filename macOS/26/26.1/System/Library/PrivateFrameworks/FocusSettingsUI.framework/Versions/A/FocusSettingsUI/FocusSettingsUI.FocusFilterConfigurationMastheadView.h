@class NSString;

@interface FocusSettingsUI.FocusFilterConfigurationMastheadView : NSView {
    void /* function */ bundleIdentifier;
    void /* function */ title;
    void /* function */ subtitle;
    void /* unknown type, empty encoding */ rootView;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
