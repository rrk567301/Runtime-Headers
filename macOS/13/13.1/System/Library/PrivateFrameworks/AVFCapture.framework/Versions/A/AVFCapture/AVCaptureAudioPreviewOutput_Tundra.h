@class NSString, AVCaptureAudioPreviewOutputInternal_Tundra;

@interface AVCaptureAudioPreviewOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureAudioPreviewOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (void)initialize;
+ (id)new;

- (void)dealloc;
- (id)init;
- (id)connectionMediaTypes;
- (void)_updateOutputDeviceUniqueID:(id)a0;
- (void)_updateVolume:(float)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)connectionGraphNodeForConnection:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (id)applicationAnalytics;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;

@end
