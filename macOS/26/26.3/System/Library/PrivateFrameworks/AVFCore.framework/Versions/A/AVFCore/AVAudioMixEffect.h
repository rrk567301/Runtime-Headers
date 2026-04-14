@class AVAudioMixEffectParametersInternal;

@interface AVAudioMixEffect : NSObject <NSCopying> {
    AVAudioMixEffectParametersInternal *_audioEffect;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
