@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (unsigned char)defaultManageFlags;
- (id)personaString;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (void).cxx_destruct;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)encodeForJob;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)copyWithPersonaString:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isApplication;
- (id)_generateMacAppLabelWithInfo:(id)a0 uuid:(id)a1;
- (id)_initMacAppWithInfo:(id)a0 auid:(unsigned int)a1 uuid:(id)a2;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (id)applicationJobLabel;
- (id)embeddedApplicationIdentifier;
- (BOOL)isEmbeddedApplication;

@end
