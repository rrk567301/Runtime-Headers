@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_io;

@interface MIBUFilePacketProvider : NSObject <MIBUPacketProvidable> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _payloadSize;
    NSString *_inputFile;
    NSObject<OS_dispatch_io> *_fileChannel;
    unsigned long long _packetCount;
    unsigned long long _packetID;
    BOOL _atEOF;
}

@property (readonly, nonatomic) unsigned long long packetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bootstrap;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (BOOL)rewind;
- (void)_closeIOChannel;
- (id)_encodePacketWithPayload:(id)a0 packetCount:(unsigned long long)a1 packetUID:(unsigned long long)a2;
- (BOOL)_hasNext;
- (BOOL)_openIOChannel;
- (void)_readIOChannelOfPacketCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;
- (BOOL)_reopenIOChannel;
- (id)initWithPayloadSize:(unsigned long long)a0 inputFile:(id)a1;
- (void)providePacketsOfCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;

@end
