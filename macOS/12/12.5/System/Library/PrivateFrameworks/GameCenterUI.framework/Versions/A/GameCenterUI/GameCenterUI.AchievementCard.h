@class NSString;

@interface GameCenterUI.AchievementCard : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ backgroundEffectsGroup;
}

@property (class, nonatomic, readonly) NSString *titleTextStyle;
@property (class, nonatomic, readonly) NSString *subtitleTextStyle;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ backgroundView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ gradient;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ border;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ badge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic) void /* unknown type, empty encoding */ alwaysShowShadow;
@property (nonatomic, copy) NSString *backgroundEffectsGroup;
@property (nonatomic, retain) void /* unknown type, empty encoding */ hostView;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)menuForEvent:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
