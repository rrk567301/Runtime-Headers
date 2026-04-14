@class NSString, NSMutableSet, LAAuthenticationSheetController;

@interface SheetSupport : NSObject <LAAuthenticationSheetControllerVerificationDelegate> {
    id _laContext;
    LAAuthenticationSheetController *_sheetController;
    struct AuthorizationOpaqueRef { } *_authorization;
    const struct { unsigned int x0; struct *x1; } *_rights;
    struct { unsigned int x0; struct *x1; } *_authorizedRights;
    struct { unsigned int x0; struct *x1; } *_environment;
    unsigned int _flags;
    int _sheetResult;
    BOOL _checkRights;
    unsigned long long _originalEnvironmentItemsCount;
    long long _sheetMechanism;
    NSMutableSet *_requiredGroups;
    BOOL _passwordOnly;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)_isEnvironmentItemBanned:(struct { char *x0; unsigned long long x1; void *x2; unsigned int x3; } *)a0;
+ (void *)_loadSystemAdministrationFramework;
+ (Class)_saClassFromString:(id)a0;

- (void)dealloc;
- (id)init;
- (void)_finishSheet;
- (void)_processRightProperties;
- (int)_processSheetCredentials:(unsigned int)a0 providedUid:(int)a1 mechanism:(long long)a2;
- (void)authenticationSheetController:(id)a0 didReceiveUnverifiedCredentialsForUserID:(unsigned int)a1 mechanism:(long long)a2 completion:(id /* block */)a3;
- (BOOL)authenticationSheetControllerShouldSkipUserCredentialVerification:(id)a0;
- (void)clearAuthorizedRights;
- (int)doSheetAuthorization:(unsigned int)a0 environment:(const struct { unsigned int x0; struct *x1; } *)a1 forWindow:(id)a2 authorizedRights:(struct **)a3;
- (id)initWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0 andRights:(const struct { unsigned int x0; struct *x1; } *)a1 checkRights:(BOOL)a2;
- (BOOL)shouldUseSheet;

@end
