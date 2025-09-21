@class NSUUID;

@interface LAUser : NSObject {
    void /* unknown type, empty encoding */ properties;
    void /* unknown type, empty encoding */ disk;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ controller;
}

@property (nonatomic, readonly) NSUUID *uuid;

+ (id)makeUserWithUUID:(id)a0 disk:(id)a1 database:(id)a2 controller:(id)a3;

- (BOOL)remove:(id *)a0;
- (BOOL)lock:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)verifyPassword:(id)a0 error:(id *)a1;
- (id)passwordHint;
- (BOOL)resetPassword:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)logOut:(id *)a0;
- (BOOL)canPairWithSmartCard:(id)a0 error:(id *)a1;
- (BOOL)changePassword:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)deletePasswordHint:(id *)a0;
- (id)fetchPairedSmartCards:(id *)a0;
- (BOOL)grantOTI:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)hasOTI;
- (id)initWithUuid:(id)a0 disk:(id)a1 database:(id)a2 controller:(id)a3;
- (BOOL)isPairedWithSmartCard:(id)a0 error:(id *)a1;
- (id)lockState:(id *)a0;
- (id)lockoutStateForDomain:(long long)a0 error:(id *)a1;
- (BOOL)logInWithPassword:(id)a0 error:(id *)a1;
- (BOOL)logInWithSmartCard:(id)a0 error:(id *)a1;
- (BOOL)migrateWithSmartCard:(id)a0 legacyBlob:(id)a1 error:(id *)a2;
- (id)ntlmManager;
- (BOOL)pairWithSmartCard:(id)a0 pubKey:(id)a1 password:(id)a2 error:(id *)a3;
- (id)prepareLogInWithSmartCard:(id)a0 error:(id *)a1;
- (id)prepareUnlockWithSmartCard:(id)a0 error:(id *)a1;
- (id)prepareVerifyWithSmartCard:(id)a0 error:(id *)a1;
- (BOOL)resetPassword:(id)a0 recoveryCredential:(id)a1 error:(id *)a2;
- (BOOL)resetPasswordWithHash:(id)a0 error:(id *)a1;
- (id)srpManager;
- (BOOL)storePasswordHint:(id)a0 error:(id *)a1;
- (BOOL)unlockWithPassword:(id)a0 error:(id *)a1;
- (BOOL)unlockWithSmartCard:(id)a0 error:(id *)a1;
- (BOOL)unpairWithSmartCard:(id)a0 error:(id *)a1;
- (BOOL)verifyPassword:(id)a0 contextRef:(id)a1 error:(id *)a2;
- (BOOL)verifyPassword:(id)a0 domain:(long long)a1 contextRef:(id)a2 error:(id *)a3;
- (BOOL)verifyPassword:(id)a0 domain:(long long)a1 error:(id *)a2;
- (BOOL)verifyWithSmartCard:(id)a0 error:(id *)a1;

@end
