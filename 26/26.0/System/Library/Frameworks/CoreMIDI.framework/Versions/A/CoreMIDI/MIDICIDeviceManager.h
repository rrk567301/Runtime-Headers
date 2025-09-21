@class NSArray, NSPointerArray, NSMutableArray;

@interface MIDICIDeviceManager : NSObject {
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex;
}

@property (class, readonly, nonatomic) MIDICIDeviceManager *sharedInstance;

@property (retain, nonatomic) NSPointerArray *mutableDevices;
@property (retain, nonatomic) NSMutableArray *devices;
@property (readonly) unsigned int serverMUID;
@property (readonly, copy, nonatomic) NSArray *discoveredCIDevices;

+ (id)description;

- (void)addDevice:(id)a0;
- (id)init;
- (void)addProfile:(id)a0;
- (id).cxx_construct;
- (BOOL)removeDevice:(unsigned int)a0;
- (void).cxx_destruct;
- (void)addMutableDevice:(id)a0;
- (id)findDevice:(unsigned int)a0;
- (id)findDeviceWithMUID:(unsigned int)a0;
- (id)findProfile:(unsigned int)a0;
- (struct optional<std::pair<MIDICIDevice *, MIDIUMPCIProfile *>> { union { char x0; struct pair<MIDICIDevice *, MIDIUMPCIProfile *> { id x0; id x1; } x1; } x0; BOOL x1; })findProfileAndDevice:(unsigned int)a0;
- (void)handleProcessInquiryReplyMessage:(const struct InternalUMPCI_ProcessInquiryReport { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; struct __CFData *x7; BOOL x8; } *)a0;
- (void)handleProfileDetailsReplyMessage:(const void *)a0;
- (BOOL)postNotificationName:(id)a0 device:(id)a1 profile:(id)a2;
- (BOOL)removeMutableDevice:(id)a0;
- (BOOL)removeProfile:(unsigned int)a0;
- (void)setServerMUID:(unsigned int)a0;
- (void)updateDevice:(unsigned int)a0 description:(id)a1;
- (void)updateProfile:(unsigned int)a0 description:(id)a1;

@end
