@class FCColor;

@interface FCPuzzleNavigationBarTheme : NSObject <FCPuzzleNavigationBarThemeProviding>

@property (readonly, nonatomic) FCColor *navigationBarBackgroundColor;
@property (readonly, nonatomic) FCColor *navigationBarBackgroundDarkModeColor;
@property (readonly, nonatomic) FCColor *rankForegroundColor;
@property (readonly, nonatomic) FCColor *rankForegroundDarkModeColor;
@property (readonly, nonatomic) FCColor *barButtonItemTintColor;
@property (readonly, nonatomic) FCColor *barButtonItemTintDarkModeColor;
@property (readonly, nonatomic) FCColor *barButtonItemBackgroundColor;
@property (readonly, nonatomic) FCColor *barButtonItemBackgroundDarkModeColor;
@property (readonly, nonatomic) FCColor *shareTextForegroundColor;
@property (readonly, nonatomic) FCColor *shareText2ForegroundColor;
@property (readonly, nonatomic) FCColor *shareText2BackgroundColor;
@property (readonly, nonatomic) BOOL shareText2UseLargeFontNoCapsule;
@property (readonly, nonatomic) FCColor *shareText3ForegroundColor;
@property (readonly, nonatomic) FCColor *shareText3BackgroundColor;

- (void).cxx_destruct;
- (id)initWithNavigationBarBackgroundColor:(id)a0 navigationBarBackgroundDarkModeColor:(id)a1 rankForegroundColor:(id)a2 rankForegroundDarkModeColor:(id)a3 barButtonItemTintColor:(id)a4 barButtonItemTintDarkModeColor:(id)a5 barButtonItemBackgroundColor:(id)a6 barButtonItemBackgroundDarkModeColor:(id)a7 shareTextForegroundColor:(id)a8 shareText2ForegroundColor:(id)a9 shareText2BackgroundColor:(id)a10 shareText2UseLargeFontNoCapsule:(BOOL)a11 shareText3ForegroundColor:(id)a12 shareText3BackgroundColor:(id)a13;

@end
