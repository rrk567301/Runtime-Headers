@interface FamilyCircleUI.InviteViaServicesHook : NSObject <NSSharingServiceDelegate> {
    void /* unknown type, empty encoding */ inviteViaAirDropHookKey;
    void /* unknown type, empty encoding */ inviteViaMessagesHookKey;
    void /* unknown type, empty encoding */ inviteViaMailHookKey;
    void /* unknown type, empty encoding */ hookNameWithInviteOption;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ window;
}

- (void).cxx_destruct;
- (id)init;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;

@end
