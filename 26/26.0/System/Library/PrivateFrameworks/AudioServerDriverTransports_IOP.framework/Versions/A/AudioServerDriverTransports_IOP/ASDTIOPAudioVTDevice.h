@class NSDictionary;

@interface ASDTIOPAudioVTDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::VoiceTrigger::UserClient, std::default_delete<ASDT::IOPAudio::VoiceTrigger::UserClient>> { struct UserClient *__ptr_; } _userClient;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _openLock;
    unsigned int _openCount;
}

@property (readonly, nonatomic) NSDictionary *eventInfo;
@property (readonly, nonatomic) BOOL isConfigured;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (BOOL)setDebugEnabled:(unsigned int)a0;
- (void)dealloc;
- (BOOL)setEnabled:(unsigned int)a0;
- (BOOL)open;
- (id).cxx_construct;
- (void)close;
- (void).cxx_destruct;
- (BOOL)setConfigurationInfo:(id)a0;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (BOOL)getChannelMask:(unsigned int *)a0;
- (id)getConfigurationInfo;
- (BOOL)getDebugEnabled:(unsigned int *)a0;
- (BOOL)getIsEnabled:(unsigned int *)a0;
- (BOOL)getModelCRC:(unsigned int *)a0;
- (BOOL)setPhraseDetectEventBlock:(id /* block */)a0;

@end
