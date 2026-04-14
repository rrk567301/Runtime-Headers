@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)outputDeviceForUID:(id)a0;
- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;
- (BOOL)isMutedForOutputDevice:(id)a0 error:(id *)a1;

@end
