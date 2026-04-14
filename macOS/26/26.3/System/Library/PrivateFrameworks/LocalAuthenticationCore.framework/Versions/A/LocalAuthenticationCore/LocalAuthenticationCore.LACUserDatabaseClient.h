@interface LocalAuthenticationCore.LACUserDatabaseClient : NSObject <LACUserDatabase> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ controller;
}

- (id)initWithController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;

@end
