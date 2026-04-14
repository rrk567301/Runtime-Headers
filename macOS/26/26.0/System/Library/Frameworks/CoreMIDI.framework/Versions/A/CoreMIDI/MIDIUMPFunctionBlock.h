@class NSString, MIDIUMPEndpoint, MIDICIDevice;

@interface MIDIUMPFunctionBlock : NSObject {
    NSString *_name;
    unsigned char _functionBlockID;
    int _direction;
    unsigned char _firstGroup;
    unsigned char _totalGroupsSpanned;
    unsigned char _maxSysEx8Streams;
    int _MIDI1Info;
    int _UIHint;
    MIDIUMPEndpoint *_UMPEndpoint;
    BOOL _isEnabled;
    unsigned int _ownerClientRef;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } mMutex;
}

@property (nonatomic) unsigned int objectRef;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char functionBlockID;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) unsigned char firstGroup;
@property (readonly, nonatomic) unsigned char totalGroupsSpanned;
@property (readonly, nonatomic) unsigned char maxSysEx8Streams;
@property (readonly, nonatomic) int MIDI1Info;
@property (readonly, nonatomic) int UIHint;
@property (readonly, weak, nonatomic) MIDIUMPEndpoint *UMPEndpoint;
@property (readonly, weak, nonatomic) MIDICIDevice *midiCIDevice;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (void)setEndpoint:(id)a0;
- (id)initWithDescription:(id)a0;
- (id).cxx_construct;
- (BOOL)deserialize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializeDescription;
- (void)setFunctionBlockID:(unsigned char)a0;

@end
