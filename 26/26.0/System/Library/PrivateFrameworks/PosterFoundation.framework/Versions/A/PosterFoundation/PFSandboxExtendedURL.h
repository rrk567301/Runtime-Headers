@class BSAuditToken, NSString, NSURL, BSAtomicSignal;

@interface PFSandboxExtendedURL : NSObject <BSInvalidatable, NSSecureCoding, BSXPCSecureCoding> {
    long long _sandboxExtensionHandle;
    BSAtomicSignal *_invalidationSignal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) BSAuditToken *auditToken;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned char options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)sandboxExtendedURLForURL:(id)a0 options:(unsigned char)a1 auditToken:(id)a2 error:(out id *)a3;
+ (id)temporaryReadonlySandboxExtendedURLForAuditToken:(id)a0 error:(out id *)a1;
+ (id)temporaryReadwriteSandboxExtendedURLForAuditToken:(id)a0 error:(out id *)a1;

- (BOOL)isValidWithError:(out id *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_consumeSandboxExtensionHandleForXPCObject:(id)a0 context:(id)a1;
- (id)_issueSandboxExtensionTokenWithContext:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned char)a1 auditToken:(id)a2 error:(out id *)a3;

@end
