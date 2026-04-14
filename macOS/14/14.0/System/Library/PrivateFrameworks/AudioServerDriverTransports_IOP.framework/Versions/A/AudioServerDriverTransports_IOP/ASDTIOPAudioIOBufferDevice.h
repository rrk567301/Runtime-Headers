@class NSString;

@interface ASDTIOPAudioIOBufferDevice : NSObject {
    struct unique_ptr<ASDT::IOPAudio::IOBuffer::UserClient, std::default_delete<ASDT::IOPAudio::IOBuffer::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::IOBuffer::UserClient *, std::default_delete<ASDT::IOPAudio::IOBuffer::UserClient>> { struct UserClient *__value_; } __ptr_; } _userClient;
    struct BufferDescriptor { char *mBuffer; unsigned int mSizeBytes; } _descriptor;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int ioBufferSize;
@property (nonatomic) char *ioBuffer;

+ (id)createForIOObject:(unsigned int)a0;

- (void).cxx_destruct;
- (void)close;
- (BOOL)open;
- (id).cxx_construct;
- (id)initWithIOObject:(unsigned int)a0;
- (void)releaseIOBuffer;
- (char *)mapIOBuffer;

@end
