@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCPersistentDataStore : NSObject {
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    struct tagVCPersistentDataStoreMessage { int type; union { struct tagVCRateControlDataCollectionMessage { unsigned char state; double timestamp; double arrivalTime; unsigned int targetBitrate; unsigned int bitrate; BOOL basebandFlush; union { struct tagVCDataCollectionFeedback { double rateControlTime; double owrd; double nowrd; double nowrda; double roundTripTime; double roundTripTimeAverage; double roundTripTimeMinEnvelope; double audioPacketLossRate; double audioPacketLossRateShort; double videoPacketLossRate; double ecnCERatio; unsigned int bandwidthEstimate; double trainingValue; unsigned int trainingAction; double trainingActionLogProbability; } feedback; struct tagVCDataCollectionLocalRCEvent { unsigned int bytesInFlight; unsigned int bytesInFlightRollingAverage; } localRCEvent; struct tagVCDataCollectionNWConnection { unsigned long long nwConnectionTimestamp; unsigned char frequencyBand; unsigned char intermittentState; unsigned short estimatedIntermittentPeriod; unsigned short singleOutagePeriod; unsigned char btCoex; unsigned char radioCoex; unsigned char qualityScoreDelayRx; unsigned char qualityScoreDelayTx; unsigned char qualityScoreLossRx; unsigned char qualityScoreLossTx; unsigned char qualityScoreChannel; float offChannelTimeRatio; unsigned short wlanDutyCycle; unsigned int wifiObservedTxBitrate[6]; } nwConnection; struct tagVCDataCollectionBaseband { unsigned int radioTechnology; unsigned int flushableQueueDepth; unsigned int unflushableQueueDepth; unsigned int averageBitrate; unsigned int averageBitrateShort; unsigned int averageBitrateLong; unsigned int txBitrate; double averageQueueDepth; double expectedQueuingDelay; double bdcd; double normalizedBDCD; double normalizedDelay; } baseband; struct tagVCDataCollectionRCConfiguration { int algorithmVersion; unsigned int mode; unsigned int radioAccessTechnology; unsigned int remoteRadioAccessTechnology; unsigned int minTargetBitrate; unsigned int maxTargetBitrate; } configuration; } ; } data; struct tagVCDataCollectionMetadata { struct __CFString *conversationID; struct __CFString *participantID; unsigned int deviceClass; } metadata; } ; } _buffer[50];
    int _currentBufferIndex;
    struct sqlite3 { } *_database;
    struct sqlite3_stmt *_statementArray[7];
    char *_insertStatements[7];
    NSString *_directory;
    NSString *_databasePath;
    struct tagVCDataCollectionMetadata { struct __CFString *conversationID; struct __CFString *participantID; unsigned int deviceClass; } _dataCollectionMetadata;
    BOOL _invalid;
    id /* block */ _remoteDataCollectionProducerCallback;
    id /* block */ _localTrainingDataProducerCallback;
    unsigned char _numberOfRegisteredProducers;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)closeDatabase;
- (void)deregisterDataProducerWithType:(int)a0;
- (void)emptyBuffer;
- (void)finalizeInternal;
- (void)registerDataProducerWithType:(int)a0 producerCallback:(id /* block */)a1;
- (void)removeDatabaseFile;
- (void)runDataProducers;

@end
