@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}

- (void)_finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;

@end
