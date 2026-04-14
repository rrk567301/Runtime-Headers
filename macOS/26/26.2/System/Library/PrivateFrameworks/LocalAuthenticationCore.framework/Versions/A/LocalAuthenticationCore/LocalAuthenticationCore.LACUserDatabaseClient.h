@interface LocalAuthenticationCore.LACUserDatabaseClient : NSObject <LACUserDatabase> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ controller;
}

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)init;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;

@end
