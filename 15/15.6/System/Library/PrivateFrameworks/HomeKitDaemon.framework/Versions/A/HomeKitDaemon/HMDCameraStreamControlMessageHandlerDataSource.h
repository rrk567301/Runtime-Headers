@class NSString, HMDCameraNetworkConfig;

@interface HMDCameraStreamControlMessageHandlerDataSource : HMFObject <HMDCameraStreamControlMessageHandlerDataSource>

@property (readonly) char supportsReceivingRemoteCameraStream;
@property (readonly) char supportsChangingVolume;
@property (readonly) char supportsBidirectionalAudioForCameraStreaming;
@property (readonly, getter=isResidentCapable) char residentCapable;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
