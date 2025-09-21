@class MIDICIDevice, NSString, NSData;

@interface MIDIUMPCIProfile : NSObject {
    NSString *_name;
    NSData *_profileID;
    unsigned char _profileType;
    unsigned char _groupOffset;
    unsigned char _firstChannel;
    unsigned short _enabledChannelCount;
    unsigned short _totalChannelCount;
    BOOL _isEnabled;
    unsigned int _ownerClientRef;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } mMutex;
}

@property (weak, nonatomic) MIDICIDevice *ciDevice;
@property (nonatomic) unsigned int ownerObjectRef;
@property (nonatomic) unsigned int objectRef;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x1; } profileID;
@property (readonly, nonatomic) unsigned char profileType;
@property (readonly, nonatomic) unsigned char groupOffset;
@property (readonly, nonatomic) unsigned char firstChannel;
@property (readonly, nonatomic) unsigned short enabledChannelCount;
@property (readonly, nonatomic) unsigned short totalChannelCount;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (BOOL)hasOwner;
- (id)initWithDescription:(id)a0;
- (id).cxx_construct;
- (BOOL)deserialize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)detailsInquiryWithTarget:(unsigned char)a0 completion:(id /* block */)a1;
- (id)initWithProfileID:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x1; })a0 name:(id)a1 profileType:(unsigned char)a2 groupOffset:(unsigned char)a3 firstChannel:(unsigned char)a4 enabledChannelCount:(unsigned short)a5 totalChannelCount:(unsigned short)a6;
- (BOOL)registerToDevice:(id)a0;
- (BOOL)sendProfileSpecificData:(id)a0 error:(id *)a1;
- (id)serializeDescription;
- (BOOL)setProfileState:(BOOL)a0 enabledChannelCount:(unsigned short)a1 error:(id *)a2;

@end
