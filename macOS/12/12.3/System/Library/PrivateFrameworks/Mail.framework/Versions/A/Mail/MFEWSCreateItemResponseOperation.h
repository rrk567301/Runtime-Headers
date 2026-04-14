@class NSString, EWSCreateItemResponseType;

@interface MFEWSCreateItemResponseOperation : MFEWSResponseOperation

@property (copy) NSString *itemId;
@property (retain) EWSCreateItemResponseType *response;

- (void).cxx_destruct;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;
- (void)executeOperation;

@end
