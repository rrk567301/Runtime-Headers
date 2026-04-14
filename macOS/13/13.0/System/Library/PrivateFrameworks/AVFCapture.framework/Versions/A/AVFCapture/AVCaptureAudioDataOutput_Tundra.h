@class NSDictionary, AVCaptureAudioDataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureAudioDataOutputSampleBufferDelegate_Tundra;

@interface AVCaptureAudioDataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureAudioDataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate_Tundra> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *audioSettings;

+ (void)initialize;
+ (id)new;

- (void)dealloc;
- (id)init;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (id)supportedAssetWriterOutputFileTypes;
- (id)connectionMediaTypes;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)avCaptureOutputSettingsForConnection:(id)a0 fileType:(id)a1;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (void)_render:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (id)_defaultCaptureAudioSettings;
- (id)_getAVAudioOutputSettings;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)a0;

@end
