@class LPMedia, NSURL, LPAPFSVolume, OSPDevice, NSObject;
@protocol OS_dispatch_semaphore;

@interface OSPSecureBootVolumeVerifier : NSObject

@property (retain) NSURL *volumeURL;
@property (retain) LPMedia *targetDisk;
@property (retain) LPAPFSVolume *prebootVolume;
@property (retain) OSPDevice *device;
@property (retain) NSObject<OS_dispatch_semaphore> *initialPopulateCompleteSemaphore;
@property unsigned long long policy;

- (void).cxx_destruct;
- (id)initWithVolume:(id)a0;
- (BOOL)verify;

@end
