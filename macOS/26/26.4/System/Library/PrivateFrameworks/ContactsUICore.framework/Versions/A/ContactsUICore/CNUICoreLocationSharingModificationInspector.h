@class NSString, STManagementState, ACAccountStore, NSNumber;

@interface CNUICoreLocationSharingModificationInspector : NSObject <CNUICoreLocationSharingModificationCheck> {
    NSNumber *_effectiveDSID;
}

@property (readonly, nonatomic) STManagementState *managementState;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)effectiveDSID;
- (id)initWithManagementState:(id)a0 accountStore:(id)a1;
- (unsigned long long)locationSharingModificationState;
- (id)locationSharingModificationStateFutureForDSID:(id)a0;

@end
