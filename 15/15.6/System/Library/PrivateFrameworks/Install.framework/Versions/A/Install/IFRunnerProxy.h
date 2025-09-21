@class NSString, NSMutableDictionary, NSFileHandle, NSPipe, NSObject;
@protocol OS_dispatch_queue;

@interface IFRunnerProxy : NSObject <IFRunnerMessaging> {
    int runnerPid;
    NSPipe *runnerPipe;
    NSFileHandle *writeHandle;
    struct AuthorizationOpaqueRef { } *authorizationRef;
    char freeAuthorizationWhenDone;
    char securityInitialized;
    NSString *runnerConnectionName;
    NSMutableDictionary *authorizationKeys;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *authorizationQueue;
@property (nonatomic) int currentKey;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (char)_repairRunnerToolAtPath:(id)a0;
+ (char)authorizedAsAdmin;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (struct AuthorizationOpaqueRef { } *)authorizationRef;
- (char)connectToRunner;
- (int)_requestKeyForRights:(int)a0 askUser:(char)a1;
- (int)_returnCurrentKeyAndIncrement;
- (id)_runnerObject;
- (id)initWithAuthorizationNoCopy:(struct AuthorizationOpaqueRef { } *)a0 freeWhenDone:(char)a1;
- (int)requestKeyForRights:(int)a0 askUser:(char)a1;
- (void)requestKeyForRights:(int)a0 askUser:(char)a1 withCompletion:(id /* block */)a2 onRunLoop:(struct __CFRunLoop { } *)a3;
- (oneway void)setRunnerConnectionName:(id)a0;
- (oneway void)setRunnerPid:(int)a0;

@end
