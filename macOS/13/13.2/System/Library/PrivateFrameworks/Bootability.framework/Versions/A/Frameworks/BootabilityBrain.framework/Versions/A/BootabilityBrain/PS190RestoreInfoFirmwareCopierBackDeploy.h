@interface PS190RestoreInfoFirmwareCopierBackDeploy : PS190SoCRestoreInfoFirmwareCopierBackDeploy

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int securityDomain;

- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (id)firmwareKeyFromBuildIdentityDict:(id)a0;

@end
