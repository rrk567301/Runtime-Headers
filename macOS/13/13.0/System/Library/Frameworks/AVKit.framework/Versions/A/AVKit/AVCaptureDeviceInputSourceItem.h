@class NSString, AVCaptureDevice, AVCaptureDeviceInputSource;

@interface AVCaptureDeviceInputSourceItem : NSObject

@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) AVCaptureDevice *captureDevice;
@property (readonly) AVCaptureDeviceInputSource *inputSource;
@property (readonly) NSString *mediaType;
@property (readonly) unsigned long long type;
@property (readonly, getter=isBuiltIn) BOOL builtIn;
@property (retain) AVCaptureDeviceInputSourceItem *associatedAudioCaptureDeviceInputSourceItem;

+ (BOOL)captureDevice:(id)a0 canBeUsedForInputSourceType:(unsigned long long)a1;
+ (id)_mediaTypeForSourceType:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 inputSource:(id)a1 type:(unsigned long long)a2 builtIn:(BOOL)a3;

@end
