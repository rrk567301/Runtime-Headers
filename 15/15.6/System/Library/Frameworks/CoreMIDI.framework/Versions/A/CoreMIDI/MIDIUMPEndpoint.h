@class NSString, MIDI2DeviceInfo, NSArray;

@interface MIDIUMPEndpoint : NSObject

@property (copy, nonatomic) id /* block */ receiveBlock;
@property (nonatomic) char isMine;
@property (nonatomic) unsigned int objectRef;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int MIDIProtocol;
@property (readonly, nonatomic) unsigned char supportedMIDIProtocols;
@property (readonly, nonatomic) unsigned int MIDIDestination;
@property (readonly, nonatomic) unsigned int MIDISource;
@property (readonly, nonatomic) MIDI2DeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *productInstanceID;
@property (readonly, nonatomic) char hasStaticFunctionBlocks;
@property (readonly, nonatomic) char hasJRTSReceiveCapability;
@property (readonly, nonatomic) char hasJRTSTransmitCapability;
@property (readonly, nonatomic) unsigned char endpointType;
@property (copy, nonatomic) NSArray *functionBlocks;

+ (id)description;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (char)containsFunctionBlock:(id)a0;
- (char)deserialize:(id)a0;
- (id)serializeDescription;

@end
