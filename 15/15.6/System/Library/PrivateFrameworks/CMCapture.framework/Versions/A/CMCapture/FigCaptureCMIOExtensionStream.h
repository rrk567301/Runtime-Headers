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
    char _skipFrameRateOverride;
    _Atomic char _streaming;
    NSMutableDictionary *_figCaptureStreamProperties;
    NSMutableSet *_forceCenterStageEnabledClientsSigningIdentifiersSet;
    char _observingStreamingClients;
}

@property (readonly, nonatomic) char forceEnableCenterStageActive;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) FigCaptureCMIOExtensionDevice *device;
@property (readonly, nonatomic) char streaming;
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

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)authorizedToStartStreamForClient:(id)a0;
- (char)setStreamProperties:(id)a0 error:(id *)a1;
- (char)startStreamAndReturnError:(id *)a0;
- (char)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)configureStream;
- (void)_configureStreamSessionProperties;
- (void)_forceEnableOrDisableCenterStageIfNeeded:(char)a0;
- (id)_propertyWithAliasName:(id)a0;
- (void)_restoreCenterStageEnabledStatesForForcedClients;
- (char)_stopFigCaptureSessionAndRestoreDefaultValues;
- (void)createCMIOStreamProperties;
- (char)createFormats;
- (id)initWithType:(unsigned long long)a0 forDevice:(id)a1;
- (id)updateAttachmentsAndControlsFromTransportLayerAttachments:(id)a0;

@end
