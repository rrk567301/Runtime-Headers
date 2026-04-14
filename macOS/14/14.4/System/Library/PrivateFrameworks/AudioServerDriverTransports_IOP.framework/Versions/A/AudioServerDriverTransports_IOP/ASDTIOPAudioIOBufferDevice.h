@interface ASDTIOPAudioIOBufferDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::IOBuffer::UserClient, std::default_delete<ASDT::IOPAudio::IOBuffer::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::IOBuffer::UserClient *, std::default_delete<ASDT::IOPAudio::IOBuffer::UserClient>> { struct UserClient *__value_; } __ptr_; } _userClient;
    struct BufferDescriptor { char *mBuffer; unsigned int mSizeBytes; } _descriptor;
}

@property (nonatomic) unsigned int ioBufferSize;
@property (nonatomic) char *ioBuffer;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (void).cxx_destruct;
- (void)close;
- (BOOL)open;
- (id).cxx_construct;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (void)releaseIOBuffer;
- (char *)mapIOBuffer;

@end
