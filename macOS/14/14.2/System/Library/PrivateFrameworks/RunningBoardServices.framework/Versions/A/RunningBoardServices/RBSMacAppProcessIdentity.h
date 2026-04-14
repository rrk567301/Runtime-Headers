@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isApplication;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (id)_initMacAppWithLabel:(id)a0 infoProvider:(id)a1 auid:(unsigned int)a2 platform:(int)a3;
- (BOOL)_matchesIdentity:(id)a0;
- (id)applicationJobLabel;
- (id)copyWithAuid:(unsigned int)a0;
- (id)copyWithPersonaString:(id)a0;
- (unsigned char)defaultManageFlags;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isEmbeddedApplication;
- (id)personaString;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;

@end
