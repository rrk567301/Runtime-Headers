@class NSArray, NSPointerArray;

@interface AVCaptureSessionConfiguration : NSObject

@property (readonly) long long configurationID;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSPointerArray *videoPreviewLayers;
@property (readonly) NSArray *connections;

- (id)uniqueInputs:(id)a0;
- (void)dealloc;
- (id)uniqueConnections:(id)a0;
- (id)uniqueOutputs:(id)a0;
- (id)uniqueVideoPreviewLayers:(id)a0;
- (BOOL)_videoPreviewLayersContains:(id)a0;
- (id)initWithConfigurationID:(long long)a0 inputs:(id)a1 outputs:(id)a2 videoPreviewLayers:(id)a3 connections:(id)a4;

@end
