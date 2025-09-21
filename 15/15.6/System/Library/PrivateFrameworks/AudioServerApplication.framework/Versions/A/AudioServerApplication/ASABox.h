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
@property (readonly, nonatomic) char hasAudio;
@property (readonly, nonatomic) char hasVideo;
@property (readonly, nonatomic) char hasMIDI;
@property (readonly, nonatomic) char isProtected;
@property (nonatomic, getter=isAcquired) char acquired;
@property (readonly, nonatomic) int acquisitionFailure;
@property (nonatomic) char identify;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *deviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, nonatomic, getter=isNameSettable) char nameSettable;
@property (readonly, nonatomic, getter=isAcquireSettable) char acquireSettable;
@property (readonly, nonatomic, getter=isIdentifySettable) char identifySettable;

- (id)name;
- (void)setName:(id)a0;
- (unsigned int)transportType;
- (id)modelName;
- (id)manufacturer;
- (char)hasMIDI;
- (id)audioDevices;
- (id)clockDevices;
- (char)hasAudio;
- (char)hasVideo;
- (id)modelUID;
- (int)acquisitionFailure;
- (id)boxUID;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (char)identify;
- (void)setAcquired:(char)a0;
- (void)setIdentify:(char)a0;
- (id)audioDeviceObjectIDs;
- (id)clockDeviceObjectIDs;
- (id)coreAudioClassName;

@end
