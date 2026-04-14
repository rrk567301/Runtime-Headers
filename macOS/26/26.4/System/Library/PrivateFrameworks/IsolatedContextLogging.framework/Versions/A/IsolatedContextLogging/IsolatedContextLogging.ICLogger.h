@interface IsolatedContextLogging.ICLogger : NSObject {
    void /* unknown type, empty encoding */ subsystem;
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ oslog;
    void /* unknown type, empty encoding */ encryptionDisabled;
    void /* unknown type, empty encoding */ iclLogger;
    void /* unknown type, empty encoding */ keychainAccount;
    void /* unknown type, empty encoding */ suiteName;
    void /* unknown type, empty encoding */ encryptionDisabledKey;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iclEncryptionKey;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (id)decryptMessage:(id)a0;
- (id)encryptMessage:(id)a0;
- (id)decryptMessageWithKey:(id)a0 key:(id)a1;
- (void)icl_debug:(id)a0;
- (void)icl_error:(id)a0;
- (void)icl_fault:(id)a0;
- (void)icl_info:(id)a0;
- (void)icl_log:(id)a0;

@end
