@class ACAccountType;

@interface ACAccountsHelper : NSObject {
    ACAccountType *_type;
}

+ (id)store;
+ (id)storeQueue;

- (void).cxx_destruct;
- (id)type;
- (char)removeAccount:(id)a0 error:(id *)a1;
- (id)accountWithUsername:(id)a0;
- (char)requestAccess;
- (id)accountWithUID:(id)a0;
- (id)initWithACType:(id)a0;
- (id)makeAnAccount;
- (char)saveAccount:(id)a0 verifyCredential:(char)a1 error:(id *)a2;
- (id)storedAccounts;
- (char)verifyAccount:(id)a0 error:(id *)a1;

@end
