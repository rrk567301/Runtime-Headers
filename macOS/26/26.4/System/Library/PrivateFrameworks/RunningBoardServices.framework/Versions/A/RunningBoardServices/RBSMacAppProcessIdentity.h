@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (id)copyWithAuid:(unsigned int)a0;
- (id)debugDescription;
- (id)encodeForJob;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned char)defaultManageFlags;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)copyWithPersonaString:(id)a0;
- (id)personaString;
- (void).cxx_destruct;
- (BOOL)_matchesIdentity:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (BOOL)isApplication;
- (id)_generateMacAppLabelWithInfo:(id)a0 uuid:(id)a1;
- (id)_initMacAppWithInfo:(id)a0 auid:(unsigned int)a1 uuid:(id)a2;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (id)applicationJobLabel;
- (id)embeddedApplicationIdentifier;
- (BOOL)isEmbeddedApplication;

@end
