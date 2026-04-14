@class NSArray, AVAudioMixInternal;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property (readonly, copy, nonatomic) NSArray *inputParameters;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)audioMixInputParametersForTrackID:(int)a0;
- (void)setInputParameters:(id)a0;

@end
