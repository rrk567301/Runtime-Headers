@interface ASDTIOPAudioIOBufferDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::IOBuffer::UserClient, std::default_delete<ASDT::IOPAudio::IOBuffer::UserClient>> { struct UserClient *__ptr_; } _userClient;
    struct IOMemoryMap { void /* function */ **_vptr$IOMemoryMap; struct IOConnect { void /* function */ **_vptr$IOConnect; struct shared_ptr<ASDT::IOConnect::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; BOOL mIsOpen; } mConnection; void *mAddress; unsigned int mSize; unsigned int mType; } _memoryMap;
}

@property (readonly, nonatomic) unsigned int ioBufferSize;
@property (readonly, nonatomic) char **ioBufferRef;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (BOOL)open;
- (id).cxx_construct;
- (void)close;
- (void).cxx_destruct;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (void)releaseIOBuffer;
- (BOOL)mapIOBuffer;

@end
