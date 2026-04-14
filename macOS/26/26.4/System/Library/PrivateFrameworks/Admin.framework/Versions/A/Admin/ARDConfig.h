@interface ARDConfig : NSObject

+ (id)sharedARDConfig;

- (void)setScreenSharingEnabled:(BOOL)a0;
- (BOOL)isARDOn;
- (BOOL)isScreenSharingOn;
- (void)setARDEnabled:(BOOL)a0;
- (void)writeVNCPassword:(id)a0;

@end
