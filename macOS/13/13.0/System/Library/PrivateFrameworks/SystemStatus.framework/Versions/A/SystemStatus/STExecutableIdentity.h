@class NSString, BSAuditToken;

@interface STExecutableIdentity : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {
    BSAuditToken *_bsAuditToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithExecutablePath:(id)a0;
- (id)initWithBundlePath:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 bundlePath:(id)a1 executablePath:(id)a2;

@end
