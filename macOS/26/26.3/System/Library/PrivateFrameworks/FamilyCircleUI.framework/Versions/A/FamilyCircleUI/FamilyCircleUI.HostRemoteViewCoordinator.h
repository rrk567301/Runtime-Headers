@interface FamilyCircleUI.HostRemoteViewCoordinator : NSObject <EXHostViewControllerDelegate, FamilyCircleUI.AgeRangeSharingAlertProtocol> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ onEnd;
    void /* unknown type, empty encoding */ ageRangeRequestModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteViewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)dismissWithError:(id)a0 response:(id)a1;
- (void)dontShareAgeRange;
- (void)shareAgeRange;

@end
