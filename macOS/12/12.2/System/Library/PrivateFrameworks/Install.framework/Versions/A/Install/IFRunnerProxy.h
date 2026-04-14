@class NSString, NSMutableDictionary, NSFileHandle, NSPipe;

@interface IFRunnerProxy : NSObject {
    int runnerPid;
    NSPipe *runnerPipe;
    NSFileHandle *writeHandle;
    struct AuthorizationOpaqueRef { } *authorizationRef;
    BOOL freeAuthorizationWhenDone;
    BOOL securityInitialized;
    NSString *runnerConnectionName;
    NSMutableDictionary *authorizationKeys;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)authorizedAsAdmin;
+ (BOOL)_repairRunnerToolAtPath:(id)a0;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (struct AuthorizationOpaqueRef { } *)authorizationRef;
- (void)_runBlockOnThread:(id)a0 withBlock:(id /* block */)a1 waitUntilDone:(BOOL)a2;
- (void)__runBlock:(id /* block */)a0;
- (id)initWithAuthorizationNoCopy:(struct AuthorizationOpaqueRef { } *)a0 freeWhenDone:(BOOL)a1;
- (int)requestKeyForRights:(int)a0 askUser:(BOOL)a1;
- (void)requestKeyForRights:(int)a0 askUser:(BOOL)a1 withCompletion:(id /* block */)a2 onNotifyThread:(id)a3;
- (id)_runnerObject;
- (BOOL)connectToRunner;
- (oneway void)setRunnerConnectionName:(id)a0;
- (oneway void)setRunnerPid:(int)a0;

@end
