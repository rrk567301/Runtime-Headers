@class ACAccountType;

@interface ACAccountsHelper : NSObject {
    ACAccountType *_type;
}

+ (id)storeQueue;
+ (id)store;

- (void).cxx_destruct;
- (id)type;
- (id)accountWithUsername:(id)a0;
- (BOOL)removeAccount:(id)a0 error:(id *)a1;
- (BOOL)requestAccess;
- (id)accountWithUID:(id)a0;
- (id)initWithACType:(id)a0;
- (id)makeAnAccount;
- (BOOL)saveAccount:(id)a0 verifyCredential:(BOOL)a1 error:(id *)a2;
- (id)storedAccounts;
- (BOOL)verifyAccount:(id)a0 error:(id *)a1;

@end
