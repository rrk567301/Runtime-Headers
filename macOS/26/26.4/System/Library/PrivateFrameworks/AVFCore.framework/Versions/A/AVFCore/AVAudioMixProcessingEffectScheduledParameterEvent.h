@class NSArray;

@interface AVAudioMixProcessingEffectScheduledParameterEvent : NSObject {
    NSArray *_parameters;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (id)eventWithParameters:(id)a0 at:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)parameters;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_figSchedule;
- (id)initWithParameters:(id)a0 at:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
