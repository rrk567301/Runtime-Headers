@class NSImageView;

@interface _BKUIImageView : NSView

@property (retain, nonatomic) NSImageView *baseImageView;
@property (retain, nonatomic) NSImageView *backgroundImageView;
@property (retain, nonatomic) NSImageView *middleImageView;
@property (retain, nonatomic) NSImageView *topImageView;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) char inBuddy;

+ (id)tintImage:(id)a0 withColor:(id)a1;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (char)isDark;
- (void)pinViewToEdges:(id)a0;
- (id)initInBuddy:(char)a0 withBaseImage:(id)a1 middleImage:(id)a2 topImage:(id)a3;
- (void)setupImageView:(id)a0 withImage:(id)a1;

@end
