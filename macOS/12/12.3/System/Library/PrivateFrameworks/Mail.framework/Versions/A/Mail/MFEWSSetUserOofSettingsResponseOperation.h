@class EWSSetUserOofSettingsResponseType;

@interface MFEWSSetUserOofSettingsResponseOperation : MFEWSResponseOperation

@property (retain) EWSSetUserOofSettingsResponseType *response;

- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;
- (void)executeOperation;

@end
