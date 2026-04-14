@class NSString, EARCaesuraSilencePosteriorGenerator, NSDictionary, OSDFeatures, NSObject, SDLipMovementVAD;
@protocol OS_dispatch_queue, OSDAnalyzerDelegate, OSDAnalyzerAssetLocker;

@interface OSDAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate, LipMovementVADDelegate> {
    unsigned long long _numConsecutiveNonSilenceFrames;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (retain, nonatomic) id<OSDAnalyzerAssetLocker> osdAnalyzerAssetLocker;
@property (weak, nonatomic) id<OSDAnalyzerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *osdContext;
@property (retain, nonatomic) OSDFeatures *osdFeatures;
@property (nonatomic) BOOL endOfSpeechDetected;
@property (nonatomic) BOOL startOfSpeechDetected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lipMovementQueue;
@property (retain, nonatomic) SDLipMovementVAD *lipMovementVAD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endAudio;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (id)initWithConfigFile:(id)a0 sampleRate:(unsigned long long)a1 context:(id)a2 queue:(id)a3 delegate:(id)a4 osdAnalyzerAssetLocker:(id)a5;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (BOOL)_setupCaesuraSPGWithConfigFile:(id)a0 sampleRate:(unsigned long long)a1 osdAnalyzerAssetLocker:(id)a2;
- (void)_setupOEPAssetManagerWithOSDAnalyzerAssetLocker:(id)a0;
- (void)addFaceTrackingData:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)didUpdateVisualSpeechProbability:(double)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)getCurrentOSDFeatures;
- (void)setupLipMovementVADWithModelPath:(id)a0;

@end
