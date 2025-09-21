@class NSTimer, NSMutableArray, DeviceHotpluggingNotifications;

@interface PodController : NSObject {
    NSMutableArray *_pods;
    struct __DASession { } *_daSession;
    NSMutableArray *_servicesToProcessLater;
    NSTimer *_serviceProcessTimer;
    DeviceHotpluggingNotifications *_deviceNotifications;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _handleNewDeviceLock;
}

+ (id)defaultController;

- (void)dealloc;
- (id)init;
- (id)pods;
- (id)podWithService:(unsigned int)a0;
- (id)podWithBSDPath:(id)a0;
- (void)checkForPodsInRecoveryMode;
- (int)determineUpdateMethod:(unsigned int)a0;
- (char)device:(unsigned int)a0 hasProperty:(id)a1 equalTo:(id)a2;
- (int)deviceAppearedHandler:(unsigned int)a0;
- (struct IOUSBDeviceStruct942 **)deviceInterfaceForService:(unsigned int)a0;
- (void)diskAppeared;
- (void)diskDisappeared:(struct __DADisk { } *)a0;
- (char)isDevicePod:(unsigned int)a0;
- (char)isFlashPod:(unsigned short)a0;
- (char)isFlashPodOverSCSI:(id)a0;
- (char)isN98Pod:(unsigned short)a0;
- (char)isSCSIDevice:(id)a0;
- (char)isSCSIDeviceConnectedOverUSB:(unsigned int)a0;
- (void)logPods:(id)a0;
- (id)makePodFromService:(unsigned int)a0;
- (id)podInRecoveryMode;
- (id)podWithGUID:(unsigned short *)a0;
- (id)podsWithBSDPath:(id)a0;
- (unsigned short)productIDFromProperties:(id)a0 andService:(unsigned int)a1;
- (void)removePod:(id)a0;
- (void)setupDiskArbitration;
- (char)waitForPlugin:(unsigned int)a0;
- (char)waitForPodService:(unsigned int)a0;

@end
