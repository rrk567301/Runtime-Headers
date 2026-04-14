@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)supportsLaunchingDirectly;
- (unsigned char)defaultManageFlags;
- (id)debugDescription;
- (id)copyWithPersonaString:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodeForJob;
- (BOOL)_matchesIdentity:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)personaString;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (BOOL)isApplication;
- (id)_generateMacAppLabelWithInfo:(id)a0 uuid:(id)a1;
- (id)_initMacAppWithInfo:(id)a0 auid:(unsigned int)a1 uuid:(id)a2;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (id)applicationJobLabel;
- (id)embeddedApplicationIdentifier;
- (BOOL)isEmbeddedApplication;

@end
