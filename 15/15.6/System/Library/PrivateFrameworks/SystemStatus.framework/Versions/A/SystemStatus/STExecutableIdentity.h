@class NSString, BSAuditToken;

@interface STExecutableIdentity : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {
    BSAuditToken *_bsAuditToken;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) char hasAuditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic, getter=isSystemExecutable) char systemExecutable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithExecutablePath:(id)a0;
- (id)initWithBundlePath:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 bundlePath:(id)a1 executablePath:(id)a2 bundleIdentifier:(id)a3 personaUniqueString:(id)a4 systemExecutable:(char)a5;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 bundlePath:(id)a1 executablePath:(id)a2 systemExecutable:(char)a3;
- (char)matchesExecutableIdentity:(id)a0;

@end
