@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isApplication;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (unsigned char)defaultManageFlags;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isEmbeddedApplication;
- (id)embeddedApplicationIdentifier;
- (id)applicationJobLabel;
- (id)personaString;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (id)_initMacAppWithLabel:(id)a0 infoProvider:(id)a1 auid:(unsigned int)a2 platform:(int)a3;

@end
