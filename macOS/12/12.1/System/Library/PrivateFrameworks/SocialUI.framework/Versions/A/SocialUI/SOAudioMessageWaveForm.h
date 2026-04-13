@interface SOAudioMessageWaveForm : NSObject

@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (nonatomic) unsigned long long powerLevelsCount;
@property (nonatomic) double *powerLevels;
@property double duration;

+ (double)widestScreenWidth;

- (void)dealloc;
- (id)init;
- (id)initWithContentsOfURL:(id)a0;
- (void)clearPowerLevels;
- (void)appendPowerLevel:(double)a0;
- (id)renderedWaveForm:(BOOL)a0;
- (BOOL)setPowerLevelsWithURL:(id)a0;
- (void)initializePowerLevels;
- (unsigned long long)_waveformPowerLevelsCountForDuration:(double)a0;
- (void)setPowerLevels:(double *)a0 withCount:(unsigned long long)a1;
- (void)adjustPowerLevelsCountToScreenSize;

@end
