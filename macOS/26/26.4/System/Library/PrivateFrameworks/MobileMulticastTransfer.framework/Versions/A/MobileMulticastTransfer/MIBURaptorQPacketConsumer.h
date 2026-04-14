@class NSDate, NSString, NSArray, SKRaptorQDecoder, SKRaptorQEncoderSummary, NSMutableArray, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MIBURaptorQPacketConsumer : NSObject <MIBUPacketConsumable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_outputFiles;
    SKRaptorQDecoder *_raptorQDecoder;
    SKRaptorQEncoderSummary *_encoderSummary;
    NSArray *_fileRanges;
    NSMutableArray *_raptorQDecoders;
    NSMutableArray *_partOutputFiles;
    NSMutableArray *_partOutputFilesSizes;
    NSArray *_basicParametersArray;
    NSArray *_extendedParametersArray;
    BOOL _multiFileMode;
    NSMutableArray *_fileCompletionStatus;
    NSMutableArray *_packetCountsPerFile;
    NSDate *_firstReceived;
    unsigned long long _threshold;
    BOOL _completed;
}

@property (readonly, nonatomic) NSNumber *assemblyProgress;
@property (readonly, nonatomic) unsigned long long packetsConsumed;
@property (readonly, nonatomic) unsigned long long packetsDiscarded;
@property (readonly, nonatomic) unsigned long long bytesConsumed;
@property (readonly, nonatomic) double lossRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isComplete;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)bootstrap;
- (BOOL)_bootstrap;
- (BOOL)_assembleUsingSummaryReport;
- (void)_assembleWithCompletion:(id /* block */)a0;
- (BOOL)_consumePacket:(id)a0 arrivalTime:(id)a1;
- (BOOL)assembleUsingSummaryReport;
- (void)assembleWithCompletion:(id /* block */)a0;
- (void)consumePackets:(id)a0 arrivalTime:(id)a1 withCompletion:(id /* block */)a2 inQueue:(id)a3;
- (id)getAssemblyProgress;
- (id)initWithBasicParameters:(unsigned long long)a0 extendedParameters:(unsigned int)a1 threshold:(unsigned long long)a2 outputFile:(id)a3;
- (id)initWithBasicParametersArray:(id)a0 extendedParametersArray:(id)a1 threshold:(unsigned long long)a2 fileRanges:(id)a3 outputFiles:(id)a4;
- (id)initWithEncoderSummary:(id)a0 threshold:(unsigned long long)a1 outputFile:(id)a2;
- (id)initWithEncoderSummaryFile:(id)a0 threshold:(unsigned long long)a1 outputFile:(id)a2;
- (long long)missingCount;
- (BOOL)reassembleFileFromParts:(id)a0 toOutputFile:(id)a1 maxBytesToRead:(id)a2 error:(id *)a3;

@end
