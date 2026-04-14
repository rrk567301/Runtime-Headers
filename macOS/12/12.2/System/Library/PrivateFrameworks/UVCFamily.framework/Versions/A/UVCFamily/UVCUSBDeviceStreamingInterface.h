@class UVCDeviceStreamFormat, NSArray, NSString, NSDictionary, NSData, IOUSBHostPipe;

@interface UVCUSBDeviceStreamingInterface : UVCUSBDeviceInterface <UVCDeviceStreamingInterface> {
    IOUSBHostPipe *_streamingInPipe;
    NSArray *_dataBuffers;
    NSDictionary *_streamingAttributes;
    long long _deviceSpeed;
    BOOL _supportXHCIController;
    unsigned long long _nextIsochFrameStart;
    unsigned long long _isochBootArgs;
    unsigned long long _noOfConcurrentReads;
    unsigned long long _noOfFutureIsochReads;
    UVCDeviceStreamFormat *_currentStreamFormat;
    long long _currentFrameInterval;
    NSArray *_streamFormats;
    NSData *_currentStreamProbeData;
    NSString *_streamPipeType;
}

@property (readonly) BOOL streaming;
@property (readonly) NSArray *streamFormats;
@property (readonly) UVCDeviceStreamFormat *currentStreamFormat;
@property (readonly) long long currentFrameInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)stopStream:(id *)a0;
- (BOOL)startStream:(id)a0 frameInterval:(unsigned long long)a1 error:(id *)a2;
- (id)streamPipeType;
- (id)streamingAttributes;
- (BOOL)changeFrameInterval:(unsigned long long)a0 error:(id *)a1;
- (id)initWithInterface:(id)a0 delegate:(id)a1 attributes:(id)a2;
- (BOOL)parseFormats;
- (id)getStreamInPipeOfType:(id)a0 type:(unsigned char)a1 probeData:(id)a2 alternateSetting:(unsigned long long)a3;
- (void)fillupFrameList:(id)a0 bufferSize:(unsigned long long)a1 numberOfPacketsPerRequest:(unsigned long long)a2;
- (unsigned long long)getFirstFrameNumber:(unsigned long long)a0 bInterval:(unsigned char)a1;
- (void)handleIsochEndpointRead:(id)a0 frameList:(struct IOUSBHostIsochronousFrame { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a1 numberOfPacketsPerRequest:(unsigned long long)a2;
- (BOOL)doIsochEndpointRead:(id)a0 frameListBuffer:(id)a1 numberOfPacketsPerRequest:(unsigned long long)a2 bInterval:(unsigned char)a3 bufferSize:(unsigned long long)a4 error:(id *)a5;
- (void)dispatchStreamError:(unsigned long long)a0;
- (void)handleBulkEndpointRead:(id)a0 bytesTransferred:(unsigned long long)a1;
- (BOOL)doBulkEndpointRead:(id)a0 error:(id *)a1;
- (id)createFrameListBuffers:(long long)a0 numberOfPacketsPerRequest:(unsigned long long)a1 bufferSize:(unsigned long long)a2;
- (BOOL)doCommitControl:(id)a0 error:(id *)a1;
- (BOOL)doProbeControl:(id)a0 frameRate:(unsigned long long)a1 probeData:(id *)a2 error:(id *)a3;
- (id)getStreamPipe:(id)a0 alternateSetting:(unsigned long long *)a1;
- (BOOL)doBulkStream:(unsigned long long)a0 error:(id *)a1;
- (BOOL)doIsochStream:(unsigned long long)a0 streamFormat:(id)a1 frameInterval:(unsigned long long)a2 error:(id *)a3;

@end
