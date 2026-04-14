@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (BOOL)isLocked;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)callOnNextUnlock:(id /* block */)a0;

@end
