@class NSString;

@interface VPMutableContext : VPContext

@property (nonatomic) unsigned int operatingSystem;
@property (copy, nonatomic) NSString *operatingSystemReleaseType;
@property (nonatomic) BOOL runsOnInternalBuild;
@property (nonatomic) BOOL runsOnUIBuild;
@property (nonatomic) BOOL runsInSimulationMode;
@property (nonatomic) BOOL runsInAudioDSPManagerMode;
@property (nonatomic) BOOL runsInRosettaTranslatedProcess;
@property (copy, nonatomic) NSString *shortHardwareModelName;
@property (copy, nonatomic) NSString *tuningDirectoryPath;
@property (copy, nonatomic) NSString *temporaryDirectoryPath;
@property (nonatomic) unsigned int productType;
@property (nonatomic) unsigned int acousticID;
@property (nonatomic) unsigned int hardwareLayoutID;

- (void)setProductType:(unsigned int)a0;
- (void)setDeviceClass:(unsigned int)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAcousticID:(unsigned int)a0;
- (void)setHardwareLayoutID:(unsigned int)a0;
- (void)setOperatingSystem:(unsigned int)a0;
- (void)setOperatingSystemReleaseType:(id)a0;
- (void)setRunsInAudioDSPManagerMode:(BOOL)a0;
- (void)setRunsInRosettaTranslatedProcess:(BOOL)a0;
- (void)setRunsInSimulationMode:(BOOL)a0;
- (void)setRunsOnInternalBuild:(BOOL)a0;
- (void)setRunsOnUIBuild:(BOOL)a0;
- (void)setShortHardwareModelName:(id)a0;
- (void)setTemporaryDirectoryPath:(id)a0;
- (void)setTuningDirectoryPath:(id)a0;

@end
