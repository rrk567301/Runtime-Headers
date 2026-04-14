@class NSString, AVCaptureAudioPreviewOutputInternal;

@interface AVCaptureAudioPreviewOutput : AVCaptureOutput {
    AVCaptureAudioPreviewOutputInternal *_internal;
}

@property (copy, nonatomic) NSString *outputDeviceUniqueID;
@property (nonatomic) float volume;

+ (id)new;
+ (void)initialize;

- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_updateVolume:(float)a0;
- (id)init;
- (void)dealloc;
- (void)_updateOutputDeviceUniqueID:(id)a0;

@end
