@interface GameCenterUI.GKPlayerGroupView : GameCenterUI.GKPlayerGroupBaseView {
    void /* unknown type, empty encoding */ playerCount;
    void /* unknown type, empty encoding */ playerSelectionProxy;
    void /* unknown type, empty encoding */ groupImageView;
}

@property (nonatomic, weak) void /* function */ iconContainer;
@property (nonatomic, weak) void /* function */ playerView1;
@property (nonatomic, weak) void /* function */ playerView2;
@property (nonatomic, weak) void /* function */ playerView3;
@property (nonatomic, weak) void /* function */ playerView4;
@property (nonatomic, weak) void /* function */ playerView5;
@property (nonatomic, weak) void /* function */ playerView6;
@property (nonatomic, weak) void /* function */ playerView7;
@property (nonatomic, weak) void /* function */ playerView1WidthContraint;
@property (nonatomic, weak) void /* function */ playerView2WidthContraint;
@property (nonatomic, weak) void /* function */ playerView3WidthContraint;
@property (nonatomic, weak) void /* function */ playerView4WidthContraint;
@property (nonatomic, weak) void /* function */ playerView5WidthContraint;
@property (nonatomic, weak) void /* function */ playerView6WidthContraint;
@property (nonatomic, weak) void /* function */ playerView7WidthContraint;
@property (nonatomic, weak) void /* function */ playerView1LeadingConstraint;
@property (nonatomic, weak) void /* function */ playerView1TopConstraint;
@property (nonatomic, weak) void /* function */ playerView2TrailingConstraint;
@property (nonatomic, weak) void /* function */ playerView2BottomConstraint;
@property (nonatomic, weak) void /* function */ playerView3LeadingConstraint;
@property (nonatomic, weak) void /* function */ playerView3BottomConstraint;
@property (nonatomic, weak) void /* function */ playerView4TrailingConstraint;
@property (nonatomic, weak) void /* function */ playerView4TopConstraint;
@property (nonatomic, weak) void /* function */ playerView5LeadingConstraint;
@property (nonatomic, weak) void /* function */ playerView5BottomConstraint;
@property (nonatomic, weak) void /* function */ playerView6LeadingConstraint;
@property (nonatomic, weak) void /* function */ playerView6TopConstraint;
@property (nonatomic, weak) void /* function */ playerView7LeadingConstraint;
@property (nonatomic, weak) void /* function */ playerView7BottomConstraint;

+ (id)create;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureWithPlayers:(id)a0 messagesGroupIdentifier:(id)a1 playerSelectionProxy:(id)a2;

@end
