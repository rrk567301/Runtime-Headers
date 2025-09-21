@interface ARDConfig : NSObject

+ (id)sharedARDConfig;

- (BOOL)isARDOn;
- (void)setScreenSharingEnabled:(BOOL)a0;
- (BOOL)isScreenSharingOn;
- (void)setARDEnabled:(BOOL)a0;
- (void)writeVNCPassword:(id)a0;

@end
