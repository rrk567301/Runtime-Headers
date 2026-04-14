@class NSArray, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MIBURaptorQPacketProvider : NSObject <MIBUPacketProvidable> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _payloadSize;
    unsigned long long _repairFactor;
    NSArray *_inputFiles;
    NSDictionary *_fileRangeTable;
    NSMutableArray *_encoderSummaries;
    NSMutableArray *_encodedFiles;
}

@property (readonly, nonatomic) unsigned long long rqBasicParameters;
@property (readonly, nonatomic) unsigned int rqExtendedParameters;
@property (readonly, nonatomic) NSDictionary *fileRangeTable;
@property (readonly, nonatomic) NSArray *rqBasicParametersArray;
@property (readonly, nonatomic) NSArray *rqExtendedParametersArray;
@property (readonly, nonatomic) unsigned long long packetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)bootstrap;
- (BOOL)_bootstrap;
- (BOOL)hasNext;
- (BOOL)rewind;
- (BOOL)_rewind;
- (BOOL)_hasNext;
- (void)_provideOnePacketWithCompletion:(id /* block */)a0;
- (void)_providePacketsOfCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;
- (id)_splitInputFileIfNeeded:(id)a0;
- (id)initWithPayloadSize:(unsigned long long)a0 repairFactor:(unsigned long long)a1 inputFiles:(id)a2;
- (void)providePacketsOfCount:(unsigned long long)a0 withCompletion:(id /* block */)a1 inQueue:(id)a2;

@end
