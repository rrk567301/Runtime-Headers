@class CMContinuityCaptureCompositeDevice, NSArray, NSSet, NSString, NSMutableDictionary, CMContinuityCaptureVideoDevice, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureVideoStream : CMIOExtensionStream <CMIOExtensionStreamSource> {
    NSArray *_extensionStreamFormats;
    NSArray *_continuityStreamFormats;
    NSMutableDictionary *_cmControlByName;
    NSMutableDictionary *_clientsRequestingBooleanControlOnByControlName;
    NSMutableDictionary *_maxPhotoQualityPrioritizationByClients;
    unsigned long long _activeFormatIndex;
    CMContinuityCaptureCompositeDevice *_compositeDevice;
    CMContinuityCaptureVideoDevice *_device;
    char _registeredProprietaryDefaultsListeners;
    NSString *_deviceID;
}

@property (readonly, weak) CMContinuityCaptureVideoDevice *device;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSArray *formats;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)debugInfo;
- (char)authorizedToStartStreamForClient:(id)a0;
- (void)captureAsyncStillImage:(long long)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)disconnectClient:(id)a0;
- (void)enqueueReactionEffect:(id)a0 completionHandler:(id /* block */)a1;
- (char)setStreamProperties:(id)a0 error:(id *)a1;
- (char)startStreamAndReturnError:(id *)a0;
- (char)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_disconnectClient:(id)a0;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (id)_availableProperties;
- (id)_getResolvedStillCaptureConfigs:(id)a0;
- (char)_setStreamProperties:(id)a0 error:(id *)a1;
- (char)_startStreamAndReturnError:(id *)a0;
- (char)_stopStreamAndReturnError:(id *)a0;
- (id)_streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (id)createFormatToPublish:(id)a0;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDevice:(id)a0 streamFormats:(id)a1 deviceID:(id)a2 queue:(id)a3;
- (void)removeProprietaryDefaultsHandlersWithDeviceID:(id)a0;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupControls;
- (void)setupProprietaryDefaultsHandlersWithDeviceID:(id)a0;
- (char)setupStreams:(id)a0;
- (void)terminateComplete:(id /* block */)a0;

@end
