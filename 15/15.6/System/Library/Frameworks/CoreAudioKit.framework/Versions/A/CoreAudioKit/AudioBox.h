@class NSString;

@interface AudioBox : NSObject {
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    NSString *uid;
    char nameSettable;
    char hasAudio;
    char hasVideo;
    char hasMIDI;
    char isProtected;
    char acquired;
    char canIdentify;
    char capabilitiesRetrieved;
    char hasCleanedUp;
    NSString *serialNumber;
    NSString *firmwareVersion;
    struct CAHALAudioObject { void /* function */ **x0; unsigned int x1; } *audioObject;
}

@property (readonly) unsigned int objectID;
@property (retain) NSString *name;
@property (readonly, getter=isNameSettable) char nameSettable;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly, retain) NSString *uid;
@property (readonly) unsigned int transportType;
@property (readonly, retain) NSString *transportName;
@property (readonly, getter=isAudio) char hasAudio;
@property (readonly, getter=isVideo) char hasVideo;
@property (readonly, getter=isMIDI) char hasMIDI;
@property (readonly) char isProtected;
@property (getter=isAcquired) char acquired;
@property (readonly) char nowAcquiring;
@property (readonly) unsigned int acquireError;
@property (readonly, retain) NSString *serialNumber;
@property (readonly, retain) NSString *firmwareVersion;
@property char identify;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)localizedNameForTransportType:(unsigned int)a0;
+ (id)nameForTransportType:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)name;
- (void)cleanup;
- (void)setName:(id)a0;
- (id)uid;
- (unsigned int)objectID;
- (id)serialNumber;
- (id)model;
- (id)firmwareVersion;
- (id)initWithObjectID:(unsigned int)a0;
- (id)manufacturer;
- (char)identify;
- (void)setAcquired:(char)a0;
- (void)setIdentify:(char)a0;
- (char)isProtected;
- (int)audioBoxPropertyChanged:(unsigned int)a0 property:(unsigned int)a1;
- (char)canAcquire;
- (char)canIdentify;
- (id)localizedNameForError:(unsigned int)a0;
- (void)retrieveCapabilities;
- (void)simulateIdentify;
- (id)transportName;

@end
