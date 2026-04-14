@class NSAppearance;

@interface BKSecureIntentViewModel : NSObject

@property (retain, nonatomic) NSAppearance *effectiveAppearance;

+ (id)modelWithAppearance:(id)a0;
+ (id)_SIPromptTitle;
+ (id)_secureIntentBodyString;

- (void).cxx_destruct;
- (BOOL)hasTouchBar;
- (BOOL)isDark;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInBuddy;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInSystemPrefs;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInDemo;
- (BOOL)_isJ45x;
- (BOOL)_isJ456;
- (BOOL)isMBP16Inch;
- (BOOL)_isJ31x;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModel;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModelSettings;
- (BOOL)_isMacStudio;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j375DisplayModel:(BOOL)a0;

@end
