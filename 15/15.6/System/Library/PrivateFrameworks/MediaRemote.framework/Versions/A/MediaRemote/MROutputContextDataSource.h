@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) char isAirPlaying;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic, getter=isVolumeMuted) char volumeMuted;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) char shouldLog;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (id)outputDevicesForUID:(id)a0;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;
- (char)volumeMutedForOutputDeviceID:(id)a0 error:(id *)a1;

@end
