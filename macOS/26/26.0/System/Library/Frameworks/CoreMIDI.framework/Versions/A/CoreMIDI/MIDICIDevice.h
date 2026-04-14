@class MIDI2DeviceInfo, NSArray, MIDIUMPMutableEndpoint;

@interface MIDICIDevice : NSObject {
    MIDI2DeviceInfo *_deviceInfo;
    unsigned int _MUID;
    BOOL _supportsProtocolNegotiation;
    BOOL _supportsProfileConfiguration;
    BOOL _supportsPropertyExchange;
    BOOL _supportsProcessInquiry;
    unsigned long long _maxSysExSize;
    unsigned long long _maxPropertyExchangeRequests;
    unsigned char _deviceType;
    NSArray *_profiles;
    BOOL _isEnabled;
    MIDIUMPMutableEndpoint *_endpoint;
    NSArray *_resourceList;
    struct vector<CIAsyncTransaction, std::allocator<CIAsyncTransaction>> { struct CIAsyncTransaction *__begin_; struct CIAsyncTransaction *__end_; struct CIAsyncTransaction *__cap_; } _activeTransactions;
    unsigned int _ownerClientRef;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } mMutex;
}

@property (nonatomic) unsigned int objectRef;
@property (nonatomic) unsigned int MIDISource;
@property (nonatomic) unsigned int MIDIDestination;
@property unsigned char group;
@property (nonatomic) unsigned char functionBlockID;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) MIDI2DeviceInfo *deviceInfo;
@property (readonly, nonatomic) unsigned int MUID;
@property (readonly, nonatomic) BOOL supportsProtocolNegotiation;
@property (readonly, nonatomic) BOOL supportsProfileConfiguration;
@property (readonly, nonatomic) BOOL supportsPropertyExchange;
@property (readonly, nonatomic) BOOL supportsProcessInquiry;
@property (readonly, nonatomic) unsigned long long maxSysExSize;
@property (readonly, nonatomic) unsigned long long maxPropertyExchangeRequests;
@property (readonly, nonatomic) unsigned char deviceType;
@property (readonly, nonatomic) NSArray *profiles;

+ (id)description;

- (id)initWithDescription:(id)a0;
- (void)addProfile:(id)a0;
- (id).cxx_construct;
- (BOOL)deserialize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)detailsInquiry:(id)a0 target:(unsigned char)a1 completion:(id /* block */)a2;
- (id)findProfileForID:(const void *)a0;
- (BOOL)handleProcessInquiryReplyMessage:(const struct InternalUMPCI_ProcessInquiryReport { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; struct __CFData *x7; BOOL x8; } *)a0;
- (BOOL)handleProfileDetailsReplyMessage:(const void *)a0;
- (void)removeProfile:(id)a0;
- (void)requestProcessInquiryMessageReport:(unsigned char)a0 channelControllerMessages:(unsigned char)a1 noteDataMessages:(unsigned char)a2 dataControl:(unsigned char)a3 completion:(id /* block */)a4;
- (BOOL)sendMessage:(unsigned char)a0 deviceID:(unsigned char)a1 data:(id)a2 error:(id *)a3;
- (BOOL)sendMessageFromDevice:(id)a0 withSubType:(unsigned char)a1 deviceID:(unsigned char)a2 data:(id)a3 error:(id *)a4;
- (BOOL)sendProfileSpecificData:(id)a0 profileData:(id)a1 error:(id *)a2;
- (id)serializeDescription;
- (id)serverSideTransactionDictionary:(int)a0;
- (BOOL)setProfile:(id)a0 newState:(BOOL)a1 enabledChannelCount:(unsigned short)a2 error:(id *)a3;

@end
