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

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (char)accessInstanceVariablesDirectly;
+ (char)objectIsSuitable:(id)a0;
+ (id)validClasses;

- (oneway void)release;
- (void)dealloc;
- (id)description;
- (id)retain;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)snapshot;
- (char)changeOriginatesLocally:(id)a0;
- (char)hasObjectForKey:(id)a0;
- (void)registerKey:(id)a0 defaultObject:(id)a1 owner:(unsigned char)a2;
- (void)setSnapshot:(id)a0;
- (char)hasKey:(id)a0;
- (void)__vbSuperRelease;
- (void)setObject:(id)a0 forKey:(id)a1 withKVO:(char)a2 local:(char)a3;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)_copyValueForEntitlement:(id)a0;
- (char)_hasTrueValueForEntitlement:(id)a0;
- (char)changeOriginatesLocally;
- (char)hasObject:(id)a0 forKey:(id)a1;
- (char)isKeyPath:(id)a0;
- (long long)keyCount;
- (char)keyIsRelevantToBuddy:(id)a0;
- (char)nonLocalChangeInProgress;
- (unsigned char)ownerForKey:(id)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (id)validClasses;

@end
