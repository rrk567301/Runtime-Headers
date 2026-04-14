@class NSString;

@interface RBSDextProcessIdentity : RBSProcessIdentity {
    NSString *_serverName;
    NSString *_label;
    NSString *_bundleID;
    unsigned char _type;
}

- (id)copyWithAuid:(unsigned int)a0;
- (id)debugDescription;
- (id)encodeForJob;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_matchesIdentity:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)isAnonymous;
- (id)_initDextWithServerName:(id)a0 label:(id)a1 containingAppBundleID:(id)a2;
- (id)_initDextWithServerName:(id)a0 tagString:(id)a1 containingAppBundleID:(id)a2;
- (id)dextContainingAppBundleID;
- (id)dextLabel;
- (id)dextServerName;
- (BOOL)isDext;

@end
