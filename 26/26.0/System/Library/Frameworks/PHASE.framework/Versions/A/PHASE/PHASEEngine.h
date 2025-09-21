@class NSMutableDictionary, PHASEAssetRegistry, PHASETapRegistry, NSDictionary, PHASETapInterfaceImpl, PHASEGroupPreset, NSMutableArray, PHASEObject, PHASETargetRoomAcousticParameters, PHASEMedium, NSArray, AVAudioTime, NSUUID;

@interface PHASEEngine : NSObject {
    struct unique_ptr<PHASEEngineImpl, std::default_delete<PHASEEngineImpl>> { struct PHASEEngineImpl *__ptr_; } _impl;
    PHASEObject *_rootObject;
    PHASEMedium *_defaultMedium;
    long long _outputSpatializationMode;
    double _unitsPerSecond;
    double _unitsPerMeter;
    NSMutableArray *_internalSoundEvents;
    struct StopWatch<std::chrono::steady_clock> { struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } mStart; } _stopWatch;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_duckers;
    double _maxGainDbSpl;
    PHASETapInterfaceImpl *_tapInterfaceImpl;
}

@property (readonly, nonatomic) void *implementation;
@property (readonly, nonatomic) long long engineMode;
@property (nonatomic) long long roomAcousticTrackingMode;
@property (nonatomic) PHASETargetRoomAcousticParameters *roomAcousticTarget;
@property (nonatomic) double roomAcousticMaximumReverbTime;
@property (nonatomic) BOOL roomAcousticSoftLimiting;
@property (nonatomic) double roomAcousticSmoothing;
@property (nonatomic) long long defaultPrivateReverbPreset;
@property (nonatomic) long long spaceBlendTargetPreset;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } spaceBlendTargetPresetOrientation;
@property (nonatomic) double spaceBlendLevel;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) PHASETapRegistry *tapRegistry;
@property (nonatomic) long long sceneClassification;
@property (copy, nonatomic) NSUUID *sceneRoomUUID;
@property (nonatomic) long long outputSpatializationMode;
@property (readonly, nonatomic) long long renderingState;
@property (readonly, nonatomic) PHASEObject *rootObject;
@property (retain, nonatomic) PHASEMedium *defaultMedium;
@property (nonatomic) long long defaultReverbPreset;
@property (nonatomic) double unitsPerSecond;
@property (nonatomic) double unitsPerMeter;
@property (readonly, nonatomic) PHASEAssetRegistry *assetRegistry;
@property (readonly, copy, nonatomic) NSArray *soundEvents;
@property (readonly, copy, nonatomic) NSDictionary *groups;
@property (readonly, copy, nonatomic) NSArray *duckers;
@property (readonly, nonatomic) PHASEGroupPreset *activeGroupPreset;
@property (readonly, nonatomic) AVAudioTime *lastRenderTime;

+ (id)new;

- (void)pause;
- (id)initWithPlatform:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (BOOL)startAndReturnError:(id *)a0;
- (void)update;
- (void)destroy;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (id)initWithUpdateMode:(long long)a0 spatialMode:(long long)a1;
- (void)addDucker:(id)a0;
- (void)addSoundEvent:(id)a0;
- (void)clearProfileOverride;
- (long long)defaultReverbPreset;
- (void)gatherExternalStreamDebugInformation:(id /* block */)a0;
- (BOOL)initInternalWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2 spatialMode:(long long)a3;
- (id)initWithEngineMode:(long long)a0 updateMode:(long long)a1;
- (id)initWithUpdateMode:(long long)a0;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2;
- (id)initWithUpdateMode:(long long)a0 renderingMode:(long long)a1;
- (double)maximumGainDbSpl;
- (long long)overrideOutputSpatializationMode;
- (void)removeDucker:(id)a0;
- (void)removeSoundEvent:(id)a0;
- (id)rootObjectForSessionIOBinding:(id)a0 error:(id *)a1;
- (void)setDefaultReverbPreset:(long long)a0;
- (BOOL)setHeadphoneHRIRFile:(id)a0 error:(id *)a1;
- (void)setInternalActiveGroupMixerPreset:(id)a0;
- (void)setProfileOverride:(id)a0 experience:(id)a1 faceCount:(int)a2 balance:(double)a3;
- (void)setProfileOverrideWithName:(id)a0 balance:(double)a1;
- (void)setSpatialCategoryBandCount:(unsigned long long)a0 withName:(id)a1;
- (void)setSpatialCategoryMaxClusterCount:(unsigned long long)a0 withName:(id)a1;
- (void)setSpatialCategoryUpdateRate:(float)a0 withName:(id)a1;

@end
