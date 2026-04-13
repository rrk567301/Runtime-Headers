@class PLXPCListenerOperatorComposition, NSArray;

@interface PLCameraAgent : PLAgent

@property (readonly) PLXPCListenerOperatorComposition *cameraUsageNotification;
@property (retain) NSArray *cameraDevices;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (id)entryEventIntervalDefinitionSmartCamDetection;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)refreshMacOSCameraDeviceList;
- (void)handleMacOSCameraEvent:(id)a0;
- (BOOL)getCameraDeviceGUIdAndLocation:(id)a0;
- (BOOL)getCameraGUIdFromDeviceId:(unsigned int)a0 guid:(id *)a1;
- (BOOL)getCameraLocationFromDeviceId:(unsigned int)a0 location:(unsigned int *)a1;
- (BOOL)getCameraLocationFromGUId:(id)a0 location:(unsigned int *)a1 withRefresh:(BOOL)a2;

@end
