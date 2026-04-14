@class NSString, NSArray;

@interface ASABox : ASAObject

@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;
@property (readonly, copy, nonatomic) NSString *boxUID;
@property (readonly, copy, nonatomic) NSString *modelUID;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL hasMIDI;
@property (readonly, nonatomic) BOOL isProtected;
@property (nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) int acquisitionFailure;
@property (nonatomic) BOOL identify;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *deviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, nonatomic, getter=isNameSettable) BOOL nameSettable;
@property (readonly, nonatomic, getter=isAcquireSettable) BOOL acquireSettable;
@property (readonly, nonatomic, getter=isIdentifySettable) BOOL identifySettable;

- (id)name;
- (void)setName:(id)a0;
- (unsigned int)transportType;
- (id)modelName;
- (id)manufacturer;
- (id)modelUID;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)hasMIDI;
- (id)audioDevices;
- (id)clockDevices;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)boxUID;
- (int)acquisitionFailure;
- (BOOL)identify;
- (void)setIdentify:(BOOL)a0;
- (void)setAcquired:(BOOL)a0;
- (id)coreAudioClassName;
- (id)audioDeviceObjectIDs;
- (id)clockDeviceObjectIDs;

@end
