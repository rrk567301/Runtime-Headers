@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}

+ (void)initialize;
+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

- (struct OpaqueCMClock { } *)clock;
- (id)sourceID;
- (id)init;
- (id)ports;
- (void)dealloc;
- (BOOL)appendTimedMetadataGroup:(id)a0 error:(id *)a1;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

@end
