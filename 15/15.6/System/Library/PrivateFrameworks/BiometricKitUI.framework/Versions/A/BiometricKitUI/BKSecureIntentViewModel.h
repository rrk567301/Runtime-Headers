@class NSAppearance;

@interface BKSecureIntentViewModel : NSObject

@property (retain, nonatomic) NSAppearance *effectiveAppearance;

+ (id)_SIPromptTitle;
+ (id)_secureIntentBodyString;
+ (id)modelWithAppearance:(id)a0;

- (void).cxx_destruct;
- (char)hasTouchBar;
- (char)isDark;
- (char)_isJ31x;
- (char)_isJ43x;
- (char)_isJ45x;
- (char)_isJ62x;
- (char)_isJ180;
- (char)_isJ434;
- (char)_isJ456;
- (char)_isJ473;
- (char)_isJ773g;
- (char)_isJ773s;
- (char)_isMacStudio;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j180DisplayModel:(char)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModel;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModelSettings;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j375DisplayModel:(char)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j473DisplayModel:(char)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j773DisplayModel:(char)a0;
- (id)deviceHousingColorIndex;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInBuddy;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInDemo;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInSystemPrefs;
- (char)isMBP16Inch;

@end
