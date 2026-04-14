@interface OKSoundEffect : NSObject {
    unsigned int _soundID;
}

+ (id)soundEffectAtURL:(id)a0;
+ (void)playSoundEffectAtURL:(id)a0;

- (void)dealloc;
- (void)play;
- (id)initWithSoundURL:(id)a0;

@end
