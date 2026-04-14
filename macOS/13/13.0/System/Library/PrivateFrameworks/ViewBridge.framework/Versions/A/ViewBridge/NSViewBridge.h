@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol NSViewBridgeKVOBuddy;

@interface NSViewBridge : NSObject {
    NSMutableDictionary *_dict;
    NSMutableSet *_nonLocalChangesInProgress;
    NSMutableSet *_validClasses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) int processIdentifier;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property NSObject<NSViewBridgeKVOBuddy> *kvoBuddy;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)objectIsSuitable:(id)a0;
+ (id)validClasses;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)valueForKey:(id)a0;
- (BOOL)hasObjectForKey:(id)a0;
- (BOOL)changeOriginatesLocally:(id)a0;
- (void)registerKey:(id)a0 defaultObject:(id)a1 owner:(unsigned char)a2;
- (id)snapshot;
- (void)setSnapshot:(id)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (id)validClasses;
- (BOOL)nonLocalChangeInProgress;
- (BOOL)changeOriginatesLocally;
- (BOOL)hasKey:(id)a0;
- (BOOL)hasObject:(id)a0 forKey:(id)a1;
- (unsigned char)ownerForKey:(id)a0;
- (BOOL)isKeyPath:(id)a0;
- (long long)keyCount;
- (BOOL)keyIsRelevantToBuddy:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 withKVO:(BOOL)a2 local:(BOOL)a3;
- (id)_copyValueForEntitlement:(id)a0;
- (BOOL)_hasTrueValueForEntitlement:(id)a0;

@end
