@class NSString, NSArray, FigCaptureCMIOExtensionSessionVideoConfiguration, NSSet, NSMutableDictionary, NSDictionary, NSMutableSet, FigCaptureCMIOExtensionDevice, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionStream : CMIOExtensionStream <CMIOExtensionStreamSource> {
    NSArray *_formats;
    NSDictionary *_cmiocaptureSessionPlist;
    NSDictionary *_cinematicFramingVirtualCameraConfiguration;
    unsigned long long _activeFormatIndex;
    NSNumber *_minFrameRate;
    NSNumber *_maxFrameRate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_figCaptureDetectedObjectProperties;
    BOOL _skipFrameRateOverride;
    _Atomic BOOL _streaming;
    NSMutableDictionary *_figCaptureStreamProperties;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) FigCaptureCMIOExtensionDevice *device;
@property (readonly, retain, nonatomic) NSMutableSet *requestedDetectedObjects;
@property (readonly, retain, nonatomic) FigCaptureCMIOExtensionSessionVideoConfiguration *sessionConfiguration;
@property (readonly, nonatomic) NSArray *associatedSinkIDs;
@property (readonly) NSArray *formats;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)authorizedToStartStreamForClient:(id)a0;
- (BOOL)setStreamProperties:(id)a0 error:(id *)a1;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)configureStream;
- (void)_configureStreamSessionProperties;
- (id)_propertyWithAliasName:(id)a0;
- (void)createCMIOStreamProperties;
- (BOOL)createFormats;
- (id)initWithType:(unsigned long long)a0 forDevice:(id)a1;
- (id)updateAttachmentsAndControlsFromTransportLayerAttachments:(id)a0;

@end
