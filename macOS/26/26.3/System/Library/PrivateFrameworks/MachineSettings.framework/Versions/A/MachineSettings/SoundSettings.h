@interface SoundSettings : NSObject

+ (id)sharedSoundSettings;

- (void)save;
- (void)load;
- (double)mainVolume;
- (void)setMainVolume:(float)a0;

@end
