@class NSArray, AVAudioMixInternal;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property (readonly, copy, nonatomic) NSArray *inputParameters;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setInputParameters:(id)a0;
- (id)audioMixInputParametersForTrackID:(int)a0;

@end
