@class SDSNamedSingleDataStreamConfiguration, NSString, SDSDataLayout;

@interface SDSSingleDataStream : NSObject <SDSStream, SDSActivatable> {
    void /* unknown type, empty encoding */ streamImpl;
    void /* unknown type, empty encoding */ _stateUpdateHandler;
    void /* unknown type, empty encoding */ _rawDataReceiveHandler;
    void /* unknown type, empty encoding */ canSupportSendingBatches;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;
@property (nonatomic, readonly) SDSNamedSingleDataStreamConfiguration *streamConfiguration;
@property (nonatomic, readonly) SDSDataLayout *resolvedDataLayout;
@property (nonatomic, copy) id /* block */ rawDataReceiveHandler;
@property (nonatomic, readonly) NSString *description;

- (void)setTargetQueue:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (BOOL)send:(void *)a0 dataSize:(long long)a1 error:(id *)a2;
- (void)freeSendBuffer:(void *)a0;
- (void)send:(void *)a0 dataSize:(long long)a1 :(id /* block */)a2;
- (void *)allocateSendBuffer;
- (void)send:(void *)a0 dataSize:(long long)a1 completionHandler:(id /* block */)a2;

@end
