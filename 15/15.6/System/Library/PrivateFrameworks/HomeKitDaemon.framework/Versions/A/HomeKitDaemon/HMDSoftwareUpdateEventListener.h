@class HMSoftwareUpdateDescriptor, NSString, HMDSoftwareUpdateEventListenerContext;

@interface HMDSoftwareUpdateEventListener : HMFObject <HMFLogging, HMEEventConsumer>

@property (readonly) HMDSoftwareUpdateEventListenerContext *context;
@property (readonly) char isSoftwareUpdateDownloadedAndReadyForInstallation;
@property (readonly) char isSoftwareUpdateAvailable;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)logIdentifier;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)registerForEvents;

@end
