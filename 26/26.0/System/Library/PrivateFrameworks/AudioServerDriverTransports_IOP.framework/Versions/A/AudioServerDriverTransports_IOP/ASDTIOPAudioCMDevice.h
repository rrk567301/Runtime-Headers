@interface ASDTIOPAudioCMDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::ClientManager::UserClient, std::default_delete<ASDT::IOPAudio::ClientManager::UserClient>> { struct UserClient *__ptr_; } _userClient;
}

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (BOOL)open;
- (id).cxx_construct;
- (void)close;
- (void).cxx_destruct;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (BOOL)getEnableState:(BOOL *)a0;
- (BOOL)disableInDirection:(unsigned int)a0;
- (BOOL)enableInDirection:(unsigned int)a0;
- (BOOL)getCurrentPowerState:(unsigned int *)a0;
- (BOOL)getNodeProperty:(unsigned int)a0 withValue:(id)a1;
- (BOOL)makePowerRequestForState:(unsigned int)a0 andDirection:(unsigned int)a1;
- (BOOL)setNodeProperty:(unsigned int)a0 withValue:(id)a1;

@end
