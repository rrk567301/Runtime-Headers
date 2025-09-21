@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject {
    BrightnessSystemClient *bsc;
    id /* block */ clientBlock;
    char ownsClient;
    char notificationActive;
    char rangeSet;
    struct { float minCCT; float maxCCT; float midCCT; } defaultCctRange;
    char rangeOverridden;
    struct { float minCCT; float maxCCT; float midCCT; } cctRange;
}

@property char supported;

+ (char)supportsBlueLightReduction;

- (void)dealloc;
- (id)init;
- (char)setEnabled:(char)a0;
- (char)setMode:(int)a0;
- (char)setActive:(char)a0;
- (void)setStatusNotificationBlock:(id /* block */)a0;
- (void)enableNotifications;
- (char)getCCT:(float *)a0;
- (void)disableNotifications;
- (char)getBlueLightStatus:(struct { char x0; char x1; char x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; char x6; } *)a0;
- (char)getCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (char)getDefaultCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (char)getStrength:(float *)a0;
- (char)getWarningCCT:(float *)a0;
- (char)getWarningStrength:(float *)a0;
- (id)initWithClientObj:(id)a0;
- (char)parseStatusDictionary:(id)a0 intoStruct:(struct { char x0; char x1; char x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; char x6; } *)a1;
- (char)setCCT:(float)a0 commit:(char)a1;
- (char)setCCT:(float)a0 withPeriod:(float)a1 commit:(char)a2;
- (char)setCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (char)setEnabled:(char)a0 withOption:(int)a1;
- (char)setSchedule:(const struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } *)a0;
- (char)setStrength:(float)a0 commit:(char)a1;
- (char)setStrength:(float)a0 withPeriod:(float)a1 commit:(char)a2;
- (void)suspendNotifications:(char)a0;
- (void)suspendNotifications:(char)a0 force:(char)a1;

@end
