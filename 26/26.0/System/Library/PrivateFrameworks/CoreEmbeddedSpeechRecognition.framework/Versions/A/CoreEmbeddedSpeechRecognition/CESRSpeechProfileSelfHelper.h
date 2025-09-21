@class NSUUID;

@interface CESRSpeechProfileSelfHelper : NSObject {
    NSUUID *_componentId;
}

+ (id)_cleanupMetricsWithIsIngestionEnabled:(BOOL)a0 numEntitiesContainingEmoji:(unsigned int)a1 numEntitiesContainingSpecialCharacters:(unsigned int)a2 numEntitiesCleaned:(unsigned int)a3;
+ (id)_extractionMetricsWithIsIngestionEnabled:(BOOL)a0 isExtractionSetupSuccessful:(BOOL)a1 numEntitiesExtractionAttempted:(unsigned int)a2 numEntitiesContainingExtractions:(unsigned int)a3 numEntitiesExtracted:(unsigned int)a4;

- (id)init;
- (void).cxx_destruct;
- (void)logASRSpeechProfileUpdateEndedWithTotalNumEntitiesReceived:(unsigned int)a0 entityCleanupMetrics:(id)a1 entityExtractionMetrics:(id)a2;
- (void)logASRSpeechProfileUpdateEndedWithUserDataMetrics:(id)a0;
- (void)logASRSpeechProfileUpdateFailedWithReason:(int)a0;
- (void)logASRSpeechProfileUpdateStarted;
- (void)wrapAndEmitTopLevelEvent:(id)a0;

@end
