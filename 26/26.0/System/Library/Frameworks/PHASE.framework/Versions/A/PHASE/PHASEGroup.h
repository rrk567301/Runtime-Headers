@class PHASEEngine, NSString;

@interface PHASEGroup : NSObject {
    unsigned long long _hashId;
    double _gain;
    double _rate;
}

@property (nonatomic) double gainHighFrequency;
@property (nonatomic) double gainLowFrequency;
@property (weak, nonatomic) PHASEEngine *engine;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) double gain;
@property (nonatomic) double rate;
@property (readonly, getter=isMuted) BOOL muted;
@property (readonly, getter=isSoloed) BOOL soloed;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)mute;
- (void)unmute;
- (void)fadeGain:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeGainHighFrequency:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeGainLowFrequency:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeRate:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (double)gainHF;
- (double)gainLF;
- (void)registerWithEngine:(id)a0;
- (void)solo;
- (void)unregisterFromEngine;
- (void)unsolo;

@end
