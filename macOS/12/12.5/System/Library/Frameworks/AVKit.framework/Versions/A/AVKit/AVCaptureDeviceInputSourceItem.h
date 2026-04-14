@class NSString, AVCaptureDevice, AVCaptureDeviceInputSource;

@interface AVCaptureDeviceInputSourceItem : NSObject

@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) AVCaptureDevice *captureDevice;
@property (readonly) AVCaptureDeviceInputSource *inputSource;
@property (readonly) NSString *mediaType;
@property (readonly, getter=isBuiltIn) BOOL builtIn;
@property (retain) AVCaptureDeviceInputSourceItem *associatedAudioCaptureDeviceInputSourceItem;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 inputSource:(id)a1 mediaType:(id)a2 builtIn:(BOOL)a3;

@end
