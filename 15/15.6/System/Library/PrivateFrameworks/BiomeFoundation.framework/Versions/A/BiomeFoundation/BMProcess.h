@class NSString, NSSet, NSMutableDictionary, NSNumber;

@interface BMProcess : NSObject {
    NSString *_executablePath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entitlementCacheLock;
    NSMutableDictionary *_entitlementCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnCoreDuetAccessLock;
    NSNumber *_reliesOnCoreDuetAccess;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _machLookupCacheLock;
    NSMutableDictionary *_machLookupCache;
}

@property (readonly, nonatomic) unsigned long long processType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) char isSandboxed;
@property (readonly, nonatomic) NSSet *useCases;

+ (id)current;
+ (id)processWithXPCConnection:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (char)boolForEntitlement:(id)a0;
- (id)stringForEntitlement:(id)a0;
- (char)hasNonEmptyArrayForEntitlement:(id)a0;
- (char)_canTrustApplicationIdentifierEntitlement;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_initializeProcessProperties;
- (void)cacheValuesForEntitlements:(id)a0;
- (char)canPerformFileOperation:(id)a0 onPath:(id)a1 report:(char)a2;
- (char)canPerformGlobalMachLookup:(id)a0 report:(char)a1;
- (char)canPerformSyscall:(id)a0 report:(char)a1;
- (id)dictionaryForEntitlement:(id)a0;
- (char)hasDatavaultEntitlement;
- (char)hasNonEmptyDictionaryForEntitlement:(id)a0;
- (id)nonnullArrayForEntitlement:(id)a0;
- (id)nonnullSetOfStringsForEntitlement:(id)a0;

@end
