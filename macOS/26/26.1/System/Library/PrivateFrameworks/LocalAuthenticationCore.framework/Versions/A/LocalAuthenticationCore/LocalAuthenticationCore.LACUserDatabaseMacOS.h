@interface LocalAuthenticationCore.LACUserDatabaseMacOS : NSObject <LACUserDatabase> {
    void /* unknown type, empty encoding */ pwd;
    void /* unknown type, empty encoding */ disk;
}

- (void).cxx_destruct;
- (id)init;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;

@end
