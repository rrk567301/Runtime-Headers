@interface AppStoreKit.AchievementGroupView : NSView {
    void /* unknown type, empty encoding */ achievement;
    void /* unknown type, empty encoding */ secondAchievement;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ cardSize;
}

@property (nonatomic, readonly) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)updateLayer;

@end
