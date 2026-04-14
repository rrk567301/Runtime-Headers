@class NSData, NSString, NSURL, SecureAsset, NSDictionary, SSRVoiceProfile, NSObject, SecureSpeakerRecognitionConfig, SSRVoiceProfileRetrainingContext, SSRSpeakerRecognitionScorer;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileRetrainerPSRExclave : NSObject <SSRVoiceProfileRetrainer> {
    void *_novDetector;
}

@property (retain) SSRVoiceProfileRetrainingContext *ctx;
@property (retain) SecureAsset *asset;
@property (retain, nonatomic) SSRSpeakerRecognitionScorer *psrScorer;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile;
@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) NSURL *configFilePath;
@property (retain, nonatomic) NSURL *resourceFilePath;
@property (retain, nonatomic) NSString *configVersion;
@property (retain, nonatomic) NSURL *psrModelFilePath;
@property (retain, nonatomic) NSDictionary *comparativeModels;
@property (nonatomic) unsigned long long currUttLengthInMs;
@property (retain, nonatomic) NSData *speakerVector;
@property (nonatomic) unsigned long long speakerVectorSize;
@property (nonatomic) unsigned long long processedAudioDurationMs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long maximumSpeakerVectors;
@property (nonatomic) float bestTriggerScore;
@property (retain, nonatomic) SecureSpeakerRecognitionConfig *speakerRecognitionConfig;
@property (readonly, nonatomic) NSURL *modelFilePath;
@property (readonly, nonatomic) BOOL implicitTrainingRequired;
@property (readonly, nonatomic) unsigned long long retrainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithVoiceRetrainingContext:(id)a0;
- (id)_composeSpeakerConfusionWithScores:(id)a0 forProfiles:(id)a1;
- (id)_logSpeakerConfusion:(id)a0 forProfileArray:(id)a1 withPrependString:(id)a2;
- (void)_logSpeakerConfusionWithExplicitScores:(id)a0 withImplicitScores:(id)a1 withPurgeUtterances:(unsigned long long)a2 forProfile:(id)a3 forConfigVersion:(id)a4;
- (id)_processAudioFile:(id)a0;
- (id)_processSpeakerVector:(id)a0 withSize:(unsigned long long)a1 withScorers:(id)a2 processedAudioDurationMs:(unsigned long long)a3;
- (void)addUtterances:(id)a0 withPolicy:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (id)initWithVoiceRetrainingContext:(id)a0 secureAsset:(id)a1 secureSpeakerRecognitionConfig:(id)a2;
- (BOOL)needsRetrainingWithAudioFiles:(id)a0;
- (id)purgeConfusionInformationWithPolicy:(id /* block */)a0;
- (void)purgeLastSpeakerEmbedding;
- (BOOL)resetModelForRetraining;

@end
