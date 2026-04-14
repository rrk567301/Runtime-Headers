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
@property (readonly, nonatomic) BOOL isSandboxed;
@property (readonly, nonatomic) NSSet *useCases;

+ (id)processWithXPCConnection:(id)a0;
+ (id)current;

- (id)nonnullArrayForEntitlement:(id)a0;
- (BOOL)hasNonEmptyArrayForEntitlement:(id)a0;
- (id)nonnullSetOfStringsForEntitlement:(id)a0;
- (void)cacheValuesForEntitlements:(id)a0;
- (BOOL)_canTrustApplicationIdentifierEntitlement;
- (BOOL)boolForEntitlement:(id)a0;
- (id)stringForEntitlement:(id)a0;
- (BOOL)hasDatavaultEntitlement;
- (BOOL)canPerformSyscall:(id)a0 report:(BOOL)a1;
- (void)_initializeProcessProperties;
- (BOOL)hasNonEmptyDictionaryForEntitlement:(id)a0;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)canPerformGlobalMachLookup:(id)a0 report:(BOOL)a1;
- (id)dictionaryForEntitlement:(id)a0;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (BOOL)canPerformFileOperation:(id)a0 onPath:(id)a1 report:(BOOL)a2;
- (void).cxx_destruct;

@end
