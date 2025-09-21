@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}

- (void)_finishWithError:(id)a0;
- (void)execute;
- (void).cxx_destruct;

@end
