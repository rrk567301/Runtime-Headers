@interface AppStoreKit.AchievementGroupView : NSView {
    void /* unknown type, empty encoding */ achievement;
    void /* unknown type, empty encoding */ secondAchievement;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ cardSize;
}

@property (nonatomic, readonly) BOOL flipped;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
