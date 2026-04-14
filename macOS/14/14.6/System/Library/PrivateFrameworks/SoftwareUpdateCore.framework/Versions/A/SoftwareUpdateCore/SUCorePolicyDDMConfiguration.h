@class SUCoreLog, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePolicyDDMConfiguration : NSObject

@property (retain) SUCorePersistedState *persistedState;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) SUCoreLog *logger;

+ (id)sharedInstance;
+ (id)getDaemonCacheDirectory;
+ (id)declarationFromAllDeclarations:(id)a0;
+ (id)declarationFromAllDeclarationDicts:(id)a0;
+ (id)statePersistencePath;

- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (id)_dateFromString:(id)a0;
- (id)allDeclarations;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1 returningError:(id *)a2;
- (id)currentlyApplicableDeclaration;
- (id)initWithStatePersistencePath:(id)a0;
- (void)removeAllInvalidDeclarations;
- (BOOL)removeDeclarationForKey:(id)a0;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1;
- (id)declarationForKey:(id)a0;
- (id)initWithState;
- (void)removeAllDeclarations;
- (id)removeAllInvalidDeclarationsReturningInvalid;

@end
