@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject {
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription { } *formatDescription;
    struct OpaqueCMClock { } *clock;
    char enabled;
    int changeSeed;
    NSString *sourceID;
    NSString *sourceDeviceType;
    long long sourceDevicePosition;
}

- (void)dealloc;
- (id)init;

@end
