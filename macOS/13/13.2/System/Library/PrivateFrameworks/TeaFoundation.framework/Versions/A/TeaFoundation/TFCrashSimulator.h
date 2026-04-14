@interface TFCrashSimulator : NSObject

- (void)triggerSIGSEGV;
- (void)triggerSIGILL;
- (void)triggerSIGBUS;

@end
