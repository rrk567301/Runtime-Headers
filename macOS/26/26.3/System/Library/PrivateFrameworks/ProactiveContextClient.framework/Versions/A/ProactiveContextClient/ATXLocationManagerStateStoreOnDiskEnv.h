@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (BOOL)isLocked;
- (void)callOnNextUnlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;

@end
