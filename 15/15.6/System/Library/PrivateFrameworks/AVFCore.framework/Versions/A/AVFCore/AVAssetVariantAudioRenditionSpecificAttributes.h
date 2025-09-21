@class AVMediaSelectionOption, FigAlternateObjC;

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    AVMediaSelectionOption *_mediaSelectionOption;
}

@property (readonly, nonatomic) long long channelCount;
@property (readonly, nonatomic, getter=isBinaural) char binaural;
@property (readonly, nonatomic, getter=isImmersive) char immersive;
@property (readonly, nonatomic, getter=isDownmix) char downmix;

- (void)dealloc;
- (double)sampleRate;
- (id)initWithFigAlternateObjC:(id)a0 mediaSelectionOption:(id)a1;

@end
