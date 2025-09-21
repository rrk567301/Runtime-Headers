@interface ARDConfig : NSObject

+ (id)sharedARDConfig;

- (char)isARDOn;
- (char)isScreenSharingOn;
- (void)setARDEnabled:(char)a0;
- (void)setScreenSharingEnabled:(char)a0;
- (void)writeVNCPassword:(id)a0;

@end
