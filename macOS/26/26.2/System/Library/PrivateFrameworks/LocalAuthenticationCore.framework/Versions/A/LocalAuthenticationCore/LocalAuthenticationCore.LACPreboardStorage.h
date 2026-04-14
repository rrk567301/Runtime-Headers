@interface LocalAuthenticationCore.LACPreboardStorage : NSObject <LACSecureStorageDelegate> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ sysUtility;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)init;
- (id)acmContextForUUID:(id)a0 error:(id *)a1;

@end
