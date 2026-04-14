@class NSString;

@interface AudioBox : NSObject {
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    NSString *uid;
    BOOL nameSettable;
    BOOL hasAudio;
    BOOL hasVideo;
    BOOL hasMIDI;
    BOOL isProtected;
    BOOL acquired;
    BOOL canIdentify;
    BOOL capabilitiesRetrieved;
    BOOL hasCleanedUp;
    NSString *serialNumber;
    NSString *firmwareVersion;
    struct CAHALAudioObject { void /* function */ **x0; unsigned int x1; } *audioObject;
}

@property (readonly) unsigned int objectID;
@property (retain) NSString *name;
@property (readonly, getter=isNameSettable) BOOL nameSettable;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly, retain) NSString *uid;
@property (readonly) unsigned int transportType;
@property (readonly, retain) NSString *transportName;
@property (readonly, getter=isAudio) BOOL hasAudio;
@property (readonly, getter=isVideo) BOOL hasVideo;
@property (readonly, getter=isMIDI) BOOL hasMIDI;
@property (readonly) BOOL isProtected;
@property (getter=isAcquired) BOOL acquired;
@property (readonly) BOOL nowAcquiring;
@property (readonly) unsigned int acquireError;
@property (readonly, retain) NSString *serialNumber;
@property (readonly, retain) NSString *firmwareVersion;
@property BOOL identify;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)nameForTransportType:(unsigned int)a0;
+ (id)localizedNameForTransportType:(unsigned int)a0;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)cleanup;
- (void)setName:(id)a0;
- (id)uid;
- (unsigned int)objectID;
- (id)serialNumber;
- (id)model;
- (id)firmwareVersion;
- (id)initWithObjectID:(unsigned int)a0;
- (id)manufacturer;
- (void)setAcquired:(BOOL)a0;
- (void)setIdentify:(BOOL)a0;
- (BOOL)identify;
- (BOOL)isProtected;
- (id)transportName;
- (void)retrieveCapabilities;
- (BOOL)canAcquire;
- (BOOL)canIdentify;
- (int)audioBoxPropertyChanged:(unsigned int)a0 property:(unsigned int)a1;
- (void)simulateIdentify;
- (id)localizedNameForError:(unsigned int)a0;

@end
