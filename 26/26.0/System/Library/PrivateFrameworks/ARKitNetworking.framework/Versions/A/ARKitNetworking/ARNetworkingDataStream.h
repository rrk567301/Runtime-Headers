@class NSString, SDSSingleDataStream, SDSDataLayout;
@protocol ARNetworkingDataStreamReceiverDelegate, SDSStreamConfiguration, ARNetworkingDataStreamDelegate;

@interface ARNetworkingDataStream : NSObject <ARLoggingFullDescription> {
    id<ARNetworkingDataStreamReceiverDelegate> _dataReceiver;
    id<SDSStreamConfiguration> _configuration;
}

@property (retain) SDSSingleDataStream *stream;
@property (weak, nonatomic) id<ARNetworkingDataStreamDelegate> delegate;
@property (weak, nonatomic) id<ARNetworkingDataStreamReceiverDelegate> dataReceiver;
@property (readonly, nonatomic) SDSDataLayout *resolvedDataLayout;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void).cxx_destruct;
- (void)_stopStreamWithError:(id)a0;
- (id)_fullDescription;
- (void)_startWithStream:(id)a0 error:(id)a1;
- (void *)getNextSendBuffer;
- (id)initWithMode:(long long)a0 name:(id)a1 configuration:(id)a2;
- (void)onUpdateStreamState:(long long)a0 error:(id)a1;
- (void)relinquishUnusedBufferWithoutSending:(void *)a0;
- (void)sendBuffer:(void *)a0 withSize:(unsigned long long)a1;
- (void)startWithNetworkSession:(id)a0;

@end
