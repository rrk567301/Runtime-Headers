@interface ARDConfig : NSObject

+ (id)sharedARDConfig;

- (BOOL)isScreenSharingOn;
- (BOOL)isARDOn;
- (void)setARDEnabled:(BOOL)a0;
- (void)setScreenSharingEnabled:(BOOL)a0;
- (void)writeVNCPassword:(id)a0;

@end
