@class CCContextDeviceGroup, CCLane, CCAdaptiveRegistrationServiceDescriptor, CCSimpleRenderPass;

@interface CCAdaptiveRegistrationService : CCService {
    CCContextDeviceGroup *_deviceGroup;
    CCAdaptiveRegistrationServiceDescriptor *_serviceDescriptor;
    CCLane *resourceAdaptiveRegistration;
    CCLane *resourceIntermediateDataInputODC;
    CCLane *resourceXRInputODC;
    CCSimpleRenderPass *_adaptiveRegistrationPass;
    CCLane *resourceDisplayCameras;
    CCLane *resourceWarpAlgorithmODC;
    CCLane *resourceDisplayCamerasODC;
    CCLane *resourcesDisplayReprojectedDepthODC[2];
    CCLane *resourceDisplayDepthODC;
}

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
