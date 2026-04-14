@interface _TtCV14FamilyCircleUI28SharedFamilyGroceryIntroView22MessageServiceDelegate : NSObject <NSSharingServiceDelegate> {
    void /* unknown type, empty encoding */ onDoneSharing;
    void /* unknown type, empty encoding */ onCancel;
    void /* unknown type, empty encoding */ window;
}

- (id)init;
- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;

@end
