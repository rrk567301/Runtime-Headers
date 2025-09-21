@class NSView, NSString, NSVisualEffectView;

@interface VUINSNavigationBarBackgroundView : NSView <VUINSNavigationBarLargeTitleUpdating>

@property (retain, nonatomic) NSView *separatorView;
@property (nonatomic) char isSidebarEnabled;
@property (readonly, nonatomic) NSView *solidFillView;
@property (readonly, nonatomic) NSVisualEffectView *visualEffectFillView;
@property (nonatomic) char wantsLargeTitleOcclusion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationBarBackgroundColor;

- (void).cxx_destruct;
- (void)layout;
- (char)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (id)_solidFillBackgroundColor;
- (long long)_visualEffectMaterial;
- (void)hideLargeTitle;
- (id)initWithSidebarEnabled:(char)a0;
- (void)revealLargeTitle;

@end
