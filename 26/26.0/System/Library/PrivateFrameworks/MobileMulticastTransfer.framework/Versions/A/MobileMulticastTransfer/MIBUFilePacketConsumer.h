@class NSString, NSMutableIndexSet, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MIBUFilePacketConsumer : NSObject <MIBUPacketConsumable> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _payloadSize;
    NSString *_outputFile;
    NSString *_workFolder;
    NSMutableIndexSet *_missingPackets;
    unsigned long long _packetCount;
    NSNumber *_assemblyProgress;
}

@property (readonly, nonatomic) unsigned long long packetsConsumed;
@property (readonly, nonatomic) unsigned long long packetsDiscarded;
@property (readonly, nonatomic) unsigned long long bytesConsumed;
@property (readonly, nonatomic) double lossRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bootstrap;
- (BOOL)_isComplete;
- (void)invalidate;
- (BOOL)isComplete;
- (void).cxx_destruct;
- (BOOL)_bootstrap;
- (BOOL)assemble;
- (id)initWithPayloadSize:(unsigned long long)a0 outputFile:(id)a1;
- (BOOL)_assembleOutputFile;
- (void)_consumePacket:(id)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;
- (void)_decodePacket:(id)a0 outPayload:(id *)a1 outPacketCount:(unsigned long long *)a2 outPacketUID:(unsigned long long *)a3;
- (BOOL)_writePayloadToFile:(id)a0 forPacketUID:(unsigned long long)a1;
- (void)consumePacket:(id)a0 arrivalTime:(id)a1 withCompletion:(id /* block */)a2 inQueue:(id)a3;
- (void)consumePacket:(id)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;
- (void)consumePackets:(id)a0 arrivalTime:(id)a1 withCompletion:(id /* block */)a2 inQueue:(id)a3;
- (id)getAssemblyProgress;
- (long long)missingCount;

@end
