@class FCColor;

@interface FCPuzzleNavigationBarTheme : NSObject <FCPuzzleNavigationBarThemeProviding>

@property (readonly, nonatomic) FCColor *navigationBarBackgroundColor;
@property (readonly, nonatomic) FCColor *barButtonItemTintColor;
@property (readonly, nonatomic) FCColor *barButtonItemBackgroundColor;
@property (readonly, nonatomic) FCColor *shareTextForegroundColor;

- (void).cxx_destruct;
- (id)initWithNavigationBarBackgroundColor:(id)a0 barButtonItemTintColor:(id)a1 barButtonItemBackgroundColor:(id)a2 shareTextForegroundColor:(id)a3;

@end
