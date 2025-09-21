@class SignpostSerializationFilterConfiguration, NSMutableArray, SignpostSupportObjectExtractor;

@interface SignpostSupportObjectSerializer : NSObject

@property (retain, nonatomic) NSMutableArray *outstandingSignpostObjects;
@property (retain, nonatomic) NSMutableArray *outstandingLogMessage;
@property (retain, nonatomic) SignpostSupportObjectExtractor *extractor;
@property (nonatomic) unsigned long long maxBatchSize;
@property (nonatomic) unsigned long long maxBytesSize;
@property (copy, nonatomic) id /* block */ serializedSignpostEventBlock;
@property (copy, nonatomic) id /* block */ serializedLogMessageBlock;
@property (nonatomic) char redactPrivacySensitiveData;
@property (retain, nonatomic) SignpostSerializationFilterConfiguration *filterConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)_dataArrayForSignpostSupportObjectArray:(id)a0 errorOut:(id *)a1;
- (char)_hasProcessingBlocks;
- (id)_sanityCheckParameters;
- (char)serializeLogArchiveWithPath:(id)a0 startDate:(id)a1 endDate:(id)a2 errorOut:(id *)a3;
- (char)serializeNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)a0 errorOut:(id *)a1;

@end
