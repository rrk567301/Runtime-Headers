@class NSUUID, LAUser;

@interface ODLAUser : NSObject {
    LAUser *_underlying;
}

@property (readonly, nonatomic) NSUUID *uuid;

- (BOOL)remove:(id *)a0;
- (void)dealloc;
- (BOOL)verifyPassword:(id)a0 error:(id *)a1;
- (BOOL)resetPassword:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)changePassword:(id)a0 to:(id)a1 error:(id *)a2;
- (id)lockoutStateForDomain:(long long)a0 error:(id *)a1;
- (BOOL)resetPassword:(id)a0 recoveryCredential:(id)a1 error:(id *)a2;
- (BOOL)verifyPassword:(id)a0 contextRef:(id)a1 error:(id *)a2;

@end
