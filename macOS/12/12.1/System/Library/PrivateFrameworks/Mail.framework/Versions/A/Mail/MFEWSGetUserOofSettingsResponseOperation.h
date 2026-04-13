@class EWSUserOofSettingsType, EWSGetUserOofSettingsResponseType;

@interface MFEWSGetUserOofSettingsResponseOperation : MFEWSResponseOperation

@property (retain) EWSUserOofSettingsType *oofSettings;
@property long long allowExternalOof;
@property (retain) EWSGetUserOofSettingsResponseType *response;

- (void).cxx_destruct;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;
- (void)executeOperation;

@end
