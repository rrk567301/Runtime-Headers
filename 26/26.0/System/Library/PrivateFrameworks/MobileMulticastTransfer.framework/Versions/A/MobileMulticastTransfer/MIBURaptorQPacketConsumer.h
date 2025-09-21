@class NSString, SKRaptorQEncoderSummary, SKRaptorQDecoder, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface MIBURaptorQPacketConsumer : NSObject <MIBUPacketConsumable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_outputFile;
    SKRaptorQDecoder *_raptorQDecoder;
    SKRaptorQEncoderSummary *_encoderSummary;
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

- (BOOL)bootstrap;
- (void)invalidate;
- (void)_invalidate;
- (BOOL)isComplete;
- (void).cxx_destruct;
- (BOOL)_bootstrap;
- (BOOL)assemble;
- (BOOL)_assemble;
- (BOOL)_assembleUsingSummaryReport;
- (BOOL)_consumePacket:(id)a0 arrivalTime:(id)a1;
- (BOOL)assembleUsingSummaryReport;
- (void)consumePackets:(id)a0 arrivalTime:(id)a1 withCompletion:(id /* block */)a2 inQueue:(id)a3;
- (id)getAssemblyProgress;
- (id)initWithBasicParameters:(unsigned long long)a0 extendedParameters:(unsigned int)a1 threshold:(unsigned long long)a2 outputFile:(id)a3;
- (id)initWithEncoderSummary:(id)a0 threshold:(unsigned long long)a1 outputFile:(id)a2;
- (id)initWithEncoderSummaryFile:(id)a0 threshold:(unsigned long long)a1 outputFile:(id)a2;
- (long long)missingCount;

@end
