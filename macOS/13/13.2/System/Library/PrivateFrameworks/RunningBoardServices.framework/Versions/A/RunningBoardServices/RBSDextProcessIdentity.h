@class NSString;

@interface RBSDextProcessIdentity : RBSProcessIdentity {
    NSString *_serverName;
    NSString *_label;
    NSString *_bundleID;
    unsigned char _type;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)_initDextWithServerName:(id)a0 label:(id)a1 containingAppBundleID:(id)a2;
- (id)_initDextWithServerName:(id)a0 tagString:(id)a1 containingAppBundleID:(id)a2;
- (BOOL)isAnonymous;
- (id)dextServerName;
- (id)dextLabel;
- (id)dextContainingAppBundleID;
- (BOOL)isDext;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (id)initWithDecodeFromJob:(id)a0;

@end
