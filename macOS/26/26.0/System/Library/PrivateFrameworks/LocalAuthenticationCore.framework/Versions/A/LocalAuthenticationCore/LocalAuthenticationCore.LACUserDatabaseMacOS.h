@interface LocalAuthenticationCore.LACUserDatabaseMacOS : NSObject <LACUserDatabase> {
    void /* unknown type, empty encoding */ pwd;
    void /* unknown type, empty encoding */ disk;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;

@end
