@class NSUUID, NSString, NSArray, CMContinuityCaptureMagicStateMonitor, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, CMContinuityCaptureVideoDevice;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureCMIOVideoDevice : CMIOExtensionDevice <CMIOExtensionDeviceSource> {
    NSString *_name;
    NSString *_nonLocalizedName;
    NSString *_modelID;
    NSUUID *_deviceID;
    CMContinuityCaptureVideoDevice *_captureDevice;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_cmioDeviceConnectionState;
    NSString *_cmioDeviceWired;
    long long _entity;
    NSMutableArray *_streams;
    NSMutableDictionary *_cmControlByPropertyName;
    NSObject<OS_dispatch_queue> *_systemPreferredStatusUpdateQueue;
    char _terminated;
    char _cachedMagicState;
    char _cachedWiredState;
    CMContinuityCaptureMagicStateMonitor *_magicStateObserver;
    id _wiredObserver;
    NSDictionary *_cmioExtensionPropertyAttributesByCMIOExtensionPropertyName;
}

@property (readonly, retain) NSArray *controls;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)deviceID;
- (id)debugInfo;
- (id)devicePropertiesForProperties:(id)a0 error:(id *)a1;
- (char)setDeviceProperties:(id)a0 error:(id *)a1;
- (id)_availableProperties;
- (id)_devicePropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_setCMIOExtensionPropertyAttributesByPropertyNames;
- (char)_setDeviceProperties:(id)a0 error:(id *)a1;
- (void)_updateCameraHiddenControlIfApplicable;
- (void)_updateCameraReadyToUnhideControlIfApplicable;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)forceDeviceRemoval;
- (id)initWithCaptureDevice:(id)a0;
- (char)publishDevice:(char)a0;
- (void)resetTransportDevice:(id)a0;
- (void)setSystemPreferredStatus:(char)a0 withCompletion:(id /* block */)a1;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupControls;
- (char)setupStreamsWithDeviceID:(id)a0;
- (void)terminateComplete:(id /* block */)a0;

@end
