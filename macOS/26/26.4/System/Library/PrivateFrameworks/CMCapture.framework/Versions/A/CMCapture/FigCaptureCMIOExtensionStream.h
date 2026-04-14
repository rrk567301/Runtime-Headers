@class NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, NSObject, FigCaptureCMIOExtensionDevice, CMCaptureLocalSessionOutputStream, NSNumber, NSMutableSet;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionStream : CMIOExtensionStream <CMIOExtensionStreamSource, CMCaptureLocalSessionOutputStreamSampleBufferReceiver> {
    NSArray *_cmioFormats;
    NSDictionary *_cinematicFramingVirtualCameraConfiguration;
    unsigned long long _activeFormatIndex;
    NSNumber *_minFrameRate;
    NSNumber *_maxFrameRate;
    BOOL _skipFrameRateOverride;
    NSMutableDictionary *_figCaptureMetadataObjectProperties;
    NSMutableSet *_requestedMetadataObjects;
    NSMutableDictionary *_figCaptureFaceTrackingAttributeProperties;
    NSMutableDictionary *_faceTrackingAttributes;
    _Atomic BOOL _streaming;
    NSMutableDictionary *_figCaptureStreamProperties;
    NSMutableSet *_forceCenterStageEnabledClientsSigningIdentifiersSet;
    BOOL _observingStreamingClients;
}

@property (readonly, nonatomic) BOOL forceEnableCenterStageActive;
@property (readonly, weak, nonatomic) FigCaptureCMIOExtensionDevice *device;
@property (readonly, nonatomic) CMCaptureLocalSessionOutputStream *sinkStream;
@property (readonly, nonatomic, getter=isStreaming) BOOL streaming;
@property (readonly) NSArray *formats;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long receiverType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)authorizedToStartStreamForClient:(id)a0;
- (BOOL)setStreamProperties:(id)a0 error:(id *)a1;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)configureStream;
- (void)_configureStreamSessionProperties;
- (BOOL)_createFormats;
- (void)_forceEnableOrDisableCenterStageIfNeeded:(BOOL)a0;
- (unsigned long long)_getReceiverType;
- (id)_propertyWithAliasName:(id)a0;
- (void)_restoreCenterStageEnabledStatesForForcedClients;
- (BOOL)_stopFigCaptureSessionAndRestoreDefaultValues:(id *)a0;
- (void)createCMIOStreamProperties;
- (void)createCenterStageCMIOStreamProperties;
- (void)createCommonMetadataStreamProperties;
- (id)initWithType:(unsigned long long)a0 forDevice:(id)a1;
- (void)prepareForStreamRestartDueToUnrecoverableError;
- (void)sendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)updateAttachmentsAndControlsFromTransportLayerAttachments:(id)a0;

@end
