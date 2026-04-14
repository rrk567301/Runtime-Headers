@interface MicrophoneInjectionTapSourceDescription : NSObject {
    struct unique_ptr<audit_token_t, std::default_delete<audit_token_t>> { struct *__ptr_; } mAuditToken;
    int mPid;
    int mPidVersion;
    long long mMicrophoneInjectionMode;
}

@property (readonly, nonatomic) const struct { unsigned int x0[8]; } *auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidVersion;
@property (readonly, nonatomic) long long microphoneInjectionMode;

- (BOOL)isEquivalent:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 microphoneInjectionMode:(long long)a1;
- (id)initWithPid:(int)a0 microphoneInjectionMode:(long long)a1;

@end
