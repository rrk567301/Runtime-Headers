@class NSString, SKRaptorQEncoderSummary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MIBURaptorQPacketProvider : NSObject <MIBUPacketProvidable> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _payloadSize;
    unsigned long long _repairFactor;
    NSString *_inputFile;
    SKRaptorQEncoderSummary *_encoderSummary;
    NSMutableArray *_encodedFiles;
}

@property (readonly, nonatomic) unsigned long long rqBasicParameters;
@property (readonly, nonatomic) unsigned int rqExtendedParameters;
@property (readonly, nonatomic) unsigned long long packetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bootstrap;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (BOOL)_bootstrap;
- (BOOL)hasNext;
- (BOOL)rewind;
- (BOOL)_rewind;
- (BOOL)_hasNext;
- (void)_provideOnePacketWithCompletion:(id /* block */)a0;
- (void)_providePacketsOfCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;
- (id)initWithPayloadSize:(unsigned long long)a0 repairFactor:(unsigned long long)a1 inputFile:(id)a2;
- (void)providePacketsOfCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;

@end
