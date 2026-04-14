@class NSData;

@interface AVAudioMixCinematicAudioEffect : AVAudioMixEffect {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

+ (id)cinematicAudioEffectWithData:(id)a0;

- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;

@end
