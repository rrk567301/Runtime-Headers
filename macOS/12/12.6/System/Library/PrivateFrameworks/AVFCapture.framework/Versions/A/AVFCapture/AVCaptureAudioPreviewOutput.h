@class NSString, AVCaptureAudioPreviewOutputInternal;

@interface AVCaptureAudioPreviewOutput : AVCaptureOutput {
    AVCaptureAudioPreviewOutputInternal *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (void)initialize;
+ (id)new;

- (void)dealloc;
- (id)init;
- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_updateOutputDeviceUniqueID:(id)a0;
- (void)_updateVolume:(float)a0;

@end
