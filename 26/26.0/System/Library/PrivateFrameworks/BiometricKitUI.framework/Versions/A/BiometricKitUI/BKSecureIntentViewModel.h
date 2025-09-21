@class BKUIDevice, NSAppearance;

@interface BKSecureIntentViewModel : NSObject

@property (retain, nonatomic) NSAppearance *effectiveAppearance;
@property (retain, nonatomic) BKUIDevice *currentDevice;

+ (id)_SIPromptTitle;
+ (id)_secureIntentBodyString;
+ (id)modelWithAppearance:(id)a0 withBKUIDevice:(id)a1;

- (BOOL)isDark;
- (void).cxx_destruct;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j180DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModel;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModelSettings;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j375DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j473DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j773DisplayModel:(BOOL)a0;
- (id)deviceHousingColorIndex;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInBuddy;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInDemo;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInSystemPrefs;

@end
