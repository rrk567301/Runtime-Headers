@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

@interface NDAnalyticsPayloadUploader : NSObject

@property (retain, nonatomic) FCAnalyticsEndpointConnection *endpointConnection;
@property (retain, nonatomic) FCAsyncSerialQueue *uploadQueue;

- (id)initWithAppConfigurationManager:(id)a0;
- (id)init;
- (void)uploadPayloadsForInfos:(id)a0 withEnvelopeStore:(id)a1 perPayloadCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
