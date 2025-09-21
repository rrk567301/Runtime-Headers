@interface AVAudioMixProcessingEffectParameter : NSObject {
    unsigned int _fourcc;
    float _value;
}

+ (id)parameterWithFourCharCode:(unsigned int)a0 value:(float)a1;

- (float)value;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned int)fourcc;
- (id)initWithFourCharCode:(unsigned int)a0 value:(float)a1;

@end
