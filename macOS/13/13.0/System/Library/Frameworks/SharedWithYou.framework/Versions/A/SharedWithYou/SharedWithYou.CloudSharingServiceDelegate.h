@interface SharedWithYou.CloudSharingServiceDelegate : NSObject <NSCloudSharingServiceDelegate> {
    void /* unknown type, empty encoding */ showingManagementController;
    void /* unknown type, empty encoding */ externalDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)sharingService:(id)a0 didCompleteForItems:(id)a1 error:(id)a2;
- (unsigned long long)optionsForSharingService:(id)a0 shareProvider:(id)a1;
- (void)sharingService:(id)a0 didSaveShare:(id)a1;
- (void)sharingService:(id)a0 didStopSharing:(id)a1;

@end
