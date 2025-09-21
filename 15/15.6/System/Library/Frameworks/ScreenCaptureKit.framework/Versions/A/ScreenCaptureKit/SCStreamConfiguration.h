@class NSString;

@interface SCStreamConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isUntransformFrameForSingleWindowSharing) char untransformFrameForSingleWindowSharing;
@property (nonatomic) double contentScale;
@property (nonatomic) char enableAlwaysHDCapture;
@property (nonatomic) char bestResolution;
@property (nonatomic) char nominalResolution;
@property (nonatomic) char boundsIgnoreFraming;
@property (nonatomic) char ignoreGlobalClipShape;
@property (nonatomic) char ignoreFramingDisplay;
@property (nonatomic) char ignoreFramingSingleWindow;
@property (nonatomic) char onlyShadows;
@property (nonatomic) char cropNewsroomToUpperLeftCorner;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFrameInterval;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) char scalesToFit;
@property (nonatomic) char preservesAspectRatio;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) char showsCursor;
@property (nonatomic) char showMouseClicks;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) long long queueDepth;
@property (nonatomic) struct __CFString { } *colorMatrix;
@property (nonatomic) struct __CFString { } *colorSpaceName;
@property (nonatomic) char capturesAudio;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channelCount;
@property (nonatomic) char excludesCurrentProcessAudio;
@property (nonatomic) char ignoreShadowsDisplay;
@property (nonatomic) char ignoreShadowsSingleWindow;
@property (nonatomic) long long captureResolution;
@property (nonatomic) char capturesShadowsOnly;
@property (nonatomic) char shouldBeOpaque;
@property (nonatomic) char ignoreGlobalClipDisplay;
@property (nonatomic) char ignoreGlobalClipSingleWindow;
@property (nonatomic) long long presenterOverlayPrivacyAlertSetting;
@property (nonatomic) char includeChildWindows;
@property (nonatomic) char captureMicrophone;
@property (retain, nonatomic) NSString *microphoneCaptureDeviceID;
@property (nonatomic) long long captureDynamicRange;

+ (id)streamConfigurationWithPreset:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToSCStreamConfiguration:(id)a0;

@end
