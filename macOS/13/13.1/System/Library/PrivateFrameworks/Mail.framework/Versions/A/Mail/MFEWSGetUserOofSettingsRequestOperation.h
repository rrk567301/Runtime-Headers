@class MFEWSGetUserOofSettingsResponseOperation, EWSEmailAddress;

@interface MFEWSGetUserOofSettingsRequestOperation : MFEWSRequestOperation

@property (readonly, nonatomic) EWSEmailAddress *emailAddress;
@property (retain, nonatomic) MFEWSGetUserOofSettingsResponseOperation *responseOperation;

- (void).cxx_destruct;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)initWithEmailAddress:(id)a0 gateway:(id)a1 errorHandler:(id)a2;

@end
