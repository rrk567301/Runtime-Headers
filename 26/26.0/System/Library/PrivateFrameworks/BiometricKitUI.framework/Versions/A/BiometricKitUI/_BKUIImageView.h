@class NSImageView;

@interface _BKUIImageView : NSView

@property (retain, nonatomic) NSImageView *baseImageView;
@property (retain, nonatomic) NSImageView *backgroundImageView;
@property (retain, nonatomic) NSImageView *middleImageView;
@property (retain, nonatomic) NSImageView *topImageView;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL isDarkMode;

+ (id)tintImage:(id)a0 withColor:(id)a1;

- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)pinViewToEdges:(id)a0;
- (id)initInBuddy:(BOOL)a0 withBaseImage:(id)a1 middleImage:(id)a2 topImage:(id)a3 isDarkMode:(BOOL)a4;
- (void)setupImageView:(id)a0 withImage:(id)a1;

@end
