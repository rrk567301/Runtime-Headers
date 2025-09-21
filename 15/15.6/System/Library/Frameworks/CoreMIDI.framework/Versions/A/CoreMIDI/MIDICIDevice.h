@class MIDI2DeviceInfo, NSArray;

@interface MIDICIDevice : NSObject

@property (nonatomic) unsigned int objectRef;
@property (nonatomic) unsigned int MIDISource;
@property (nonatomic) unsigned int MIDIDestination;
@property (nonatomic) unsigned char functionBlockID;
@property (readonly, nonatomic) MIDI2DeviceInfo *deviceInfo;
@property (readonly, nonatomic) unsigned int MUID;
@property (readonly, nonatomic) char supportsProtocolNegotiation;
@property (readonly, nonatomic) char supportsProfileConfiguration;
@property (readonly, nonatomic) char supportsPropertyExchange;
@property (readonly, nonatomic) char supportsProcessInquiry;
@property (readonly, nonatomic) unsigned long long maxSysExSize;
@property (readonly, nonatomic) unsigned long long maxPropertyExchangeRequests;
@property (readonly, nonatomic) unsigned char deviceType;
@property (readonly, nonatomic) NSArray *profiles;

+ (id)description;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (char)deserialize:(id)a0;
- (id)serializeDescription;
- (char)setProfile:(id)a0 newState:(char)a1 enabledChannelCount:(unsigned short)a2 error:(id *)a3;

@end
