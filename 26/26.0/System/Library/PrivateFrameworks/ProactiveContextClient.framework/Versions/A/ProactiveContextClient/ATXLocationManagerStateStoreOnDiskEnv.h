@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (BOOL)isLocked;
- (void)dealloc;
- (void)callOnNextUnlock:(id /* block */)a0;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;
- (void).cxx_destruct;

@end
