@class NSString, AVCaptureAudioPreviewOutputInternal;

@interface AVCaptureAudioPreviewOutput : AVCaptureOutput {
    AVCaptureAudioPreviewOutputInternal *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (id)new;
+ (void)initialize;

- (void)_updateVolume:(float)a0;
- (id)connectionMediaTypes;
- (void)dealloc;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)init;
- (void)_updateOutputDeviceUniqueID:(id)a0;

@end
