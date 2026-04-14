@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface NetworkDriverSession : NSObject {
    unsigned int mDevice;
    unsigned int mEntity;
    struct RTPEndpoint { unsigned int endpoint; int uid; unsigned int thruConnection; int connectedUID; } mSource;
    struct RTPEndpoint { unsigned int endpoint; int uid; unsigned int thruConnection; int connectedUID; } mDest;
    NSString *mLocalName;
    NSMutableDictionary *mProperties;
    NSMutableArray *mPeers;
}

@property (nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned int entityID;
@property (readonly, nonatomic) int sessionType;
@property (readonly, nonatomic) NSMutableArray *peers;
@property (nonatomic) int joinPolicy;
@property (retain, nonatomic) NSString *UMPEndpointName;
@property (readonly, nonatomic) NSString *productInstanceID;
@property (nonatomic) int protocolID;
@property (nonatomic) int authenticationMethod;
@property (copy, nonatomic) NSString *sharedSecret;
@property (copy, nonatomic) NSDictionary *userAuthData;

+ (id)getLocalAddresses;

- (BOOL)active;
- (void)setActive:(BOOL)a0;
- (id)localName;
- (int)localPort;
- (void)setLocalPort:(int)a0;
- (void).cxx_destruct;
- (void)setNetworkName:(id)a0;
- (id)description;
- (id)networkName;
- (int)peerCount;
- (void)setLocalName:(id)a0;
- (unsigned int)destinationEndpoint;
- (void)setStateToEntity;
- (unsigned int)sourceEndpoint;
- (void)updateFromEntity;
- (void)addPeer:(id)a0;
- (id)peerAtIndex:(unsigned int)a0;
- (void)deleteSession;
- (long long)getPeerLatency:(unsigned int)a0;
- (void)addPersistentPeer:(id)a0 address:(id)a1;
- (void)connectToEntry:(id)a0 withAuthorization:(id)a1;
- (void)connectToService:(id)a0 withAuthorization:(id)a1;
- (void)deletePeerAtIndex:(unsigned int)a0;
- (struct __CFString { } *)entityInfoKey;
- (id)getLocalAddressesWithInterfaceInfo;
- (id)getParticipantNames;
- (BOOL)hasPersistentPeer:(id)a0;
- (int)indexOfPersistentPeerInArray:(id)a0 withAddress:(id)a1;
- (id)initNew:(unsigned int)a0 computerName:(id)a1 sessionType:(int)a2;
- (id)initWithExistingMIDIEntity:(unsigned int)a0 device:(unsigned int)a1;
- (id)persistentPeers:(BOOL)a0;
- (void)prunePersistentPeers:(id)a0;
- (void)removePersistentPeer:(id)a0;
- (void)setPeerLatency:(unsigned int)a0 latency:(long long)a1;
- (void)setPeerProperty:(unsigned int)a0 value:(id)a1 forKey:(id)a2;
- (void)setThruDest:(int)a0;
- (void)setThruSource:(int)a0;
- (BOOL)takeThruConnection:(unsigned int)a0 params:(struct MIDIThruConnectionParams { unsigned int x0; unsigned int x1; struct MIDIThruConnectionEndpoint { unsigned int x0; int x1; } x2[8]; unsigned int x3; struct MIDIThruConnectionEndpoint { unsigned int x0; int x1; } x4[8]; unsigned char x5[16]; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct MIDITransform { unsigned short x0; short x1; } x10; struct MIDITransform { unsigned short x0; short x1; } x11; struct MIDITransform { unsigned short x0; short x1; } x12; struct MIDITransform { unsigned short x0; short x1; } x13; struct MIDITransform { unsigned short x0; short x1; } x14; struct MIDITransform { unsigned short x0; short x1; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20[3]; unsigned char x21; unsigned short x22; unsigned short x23; unsigned short x24[4]; } *)a1;
- (int)thruDest;
- (int)thruSource;
- (void)updateAuthDictionaryEntry:(id)a0 value:(id)a1;
- (void)updateThru:(BOOL)a0;

@end
