@class NSString, NSMutableDictionary, NSFileHandle, NSPipe, NSObject;
@protocol OS_dispatch_queue;

@interface IFRunnerProxy : NSObject <IFRunnerMessaging> {
    int runnerPid;
    NSPipe *runnerPipe;
    NSFileHandle *writeHandle;
    struct AuthorizationOpaqueRef { } *authorizationRef;
    BOOL freeAuthorizationWhenDone;
    BOOL securityInitialized;
    NSString *runnerConnectionName;
    NSMutableDictionary *authorizationKeys;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *authorizationQueue;
@property (nonatomic) int currentKey;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)authorizedAsAdmin;
+ (BOOL)_repairRunnerToolAtPath:(id)a0;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (struct AuthorizationOpaqueRef { } *)authorizationRef;
- (int)requestKeyForRights:(int)a0 askUser:(BOOL)a1;
- (void)requestKeyForRights:(int)a0 askUser:(BOOL)a1 withCompletion:(id /* block */)a2 onRunLoop:(struct __CFRunLoop { } *)a3;
- (id)initWithAuthorizationNoCopy:(struct AuthorizationOpaqueRef { } *)a0 freeWhenDone:(BOOL)a1;
- (int)_requestKeyForRights:(int)a0 askUser:(BOOL)a1;
- (int)_returnCurrentKeyAndIncrement;
- (id)_runnerObject;
- (BOOL)connectToRunner;
- (oneway void)setRunnerConnectionName:(id)a0;
- (oneway void)setRunnerPid:(int)a0;

@end
