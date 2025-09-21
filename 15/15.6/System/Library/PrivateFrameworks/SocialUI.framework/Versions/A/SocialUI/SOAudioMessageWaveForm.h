@interface SOAudioMessageWaveForm : NSObject

@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (nonatomic) unsigned long long powerLevelsCount;
@property (nonatomic) double *powerLevels;
@property double duration;

+ (double)widestScreenWidth;

- (void)dealloc;
- (id)init;
- (id)initWithContentsOfURL:(id)a0;
- (void)appendPowerLevel:(double)a0;
- (void)clearPowerLevels;
- (unsigned long long)_waveformPowerLevelsCountForDuration:(double)a0;
- (void)adjustPowerLevelsCountToScreenSize;
- (void)initializePowerLevels;
- (id)renderedWaveForm:(char)a0;
- (void)setPowerLevels:(double *)a0 withCount:(unsigned long long)a1;
- (char)setPowerLevelsWithURL:(id)a0;

@end
