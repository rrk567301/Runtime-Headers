@class NSString, PFServerPosterIdentity, NSURL, NSHashTable, BSAuditToken, NSDictionary;

@interface PFPosterPath : NSObject <BSInvalidatable, BSXPCSecureCoding, NSSecureCoding> {
    NSHashTable *_lock_allExtensions;
    NSURL *_sandboxExtensionURL;
    BSAuditToken *_sandboxExtensionAuditToken;
    long long _lock_sandboxExtensionHandle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _options;
    unsigned char _lock_validityExtensions;
    unsigned char _lock_validityExtensionsHigh;
    BOOL _lock_invalidated;
    BOOL _lock_purged;
    NSDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PFServerPosterIdentity *serverIdentity;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSURL *contentsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;
+ (BOOL)supportsBSXPCSecureCoding;
+ (void)_setDisableUniquing:(BOOL)a0;
+ (id)temporaryDescriptorPathWithIdentifier:(id)a0 role:(id)a1;
+ (id)temporaryPathForRole:(id)a0;
+ (id)temporaryPathForTask:(id)a0 role:(id)a1;
+ (id)temporaryPathForURL:(id)a0 role:(id)a1;

- (id)loadUserInfoWithError:(out id *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)copyContentsOfPath:(id)a0 error:(out id *)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)containerURL;
- (long long)compareDescriptorIdentifiers:(id)a0;
- (BOOL)ensureContentsURLIsReachableAndReturnError:(out id *)a0;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (id)extendValidityForReason:(id)a0;
- (BOOL)isServerPosterPath;

@end
