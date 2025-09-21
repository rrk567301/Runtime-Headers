@class NSString, MIDI2DeviceInfo, NSArray;

@interface MIDIUMPEndpoint : NSObject {
    NSString *_name;
    int _MIDIProtocol;
    unsigned char _supportedMIDIProtocols;
    unsigned int _MIDISource;
    unsigned int _MIDIDestination;
    MIDI2DeviceInfo *_deviceInfo;
    NSString *_productInstanceID;
    BOOL _hasStaticFunctionBlocks;
    BOOL _hasJRTSReceiveCapability;
    BOOL _hasJRTSTransmitCapability;
    unsigned char _endpointType;
    unsigned int _ownerClientRef;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } mMutex;
}

@property (copy, nonatomic) id /* block */ receiveBlock;
@property (readonly, nonatomic) BOOL isMine;
@property (nonatomic) unsigned int objectRef;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int MIDIProtocol;
@property (readonly, nonatomic) unsigned char supportedMIDIProtocols;
@property (readonly, nonatomic) unsigned int MIDIDestination;
@property (readonly, nonatomic) unsigned int MIDISource;
@property (readonly, nonatomic) MIDI2DeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *productInstanceID;
@property (readonly, nonatomic) BOOL hasStaticFunctionBlocks;
@property (readonly, nonatomic) BOOL hasJRTSReceiveCapability;
@property (readonly, nonatomic) BOOL hasJRTSTransmitCapability;
@property (readonly, nonatomic) unsigned char endpointType;
@property (copy, nonatomic) NSArray *functionBlocks;

+ (id)description;

- (id)initWithDescription:(id)a0;
- (id).cxx_construct;
- (BOOL)deserialize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsFunctionBlock:(id)a0;
- (BOOL)sendEventList:(const struct MIDIEventList { int x0; unsigned int x1; struct MIDIEventPacket { unsigned long long x0; unsigned int x1; unsigned int x2[64]; } x2[1]; } *)a0 error:(id *)a1;
- (id)serializeDescription;
- (BOOL)setStreamProtocol:(int)a0 error:(id *)a1;

@end
