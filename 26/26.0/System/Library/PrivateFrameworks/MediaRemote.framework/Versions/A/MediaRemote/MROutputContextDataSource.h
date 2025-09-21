@class NSArray, NSString, NSObject, MRExternalOutputContextDataSource;
@protocol OS_dispatch_queue;

@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic, getter=isVolumeMuted) BOOL volumeMuted;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) MRExternalOutputContextDataSource *externalOutputContextRepresentation;

- (id)debugDescription;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;
- (BOOL)volumeMutedForOutputDeviceID:(id)a0 error:(id *)a1;
- (id)externalOutputContextRepresentation;
- (id)description;
- (id)outputDevicesForUID:(id)a0;
- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
