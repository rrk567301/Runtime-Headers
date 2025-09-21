@interface LocalAuthenticationCore.LACUserDatabaseRecoveryOS : NSObject <LACUserDatabase> {
    void /* unknown type, empty encoding */ airDB;
    void /* unknown type, empty encoding */ hasLoadedAirDB;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;

@end
