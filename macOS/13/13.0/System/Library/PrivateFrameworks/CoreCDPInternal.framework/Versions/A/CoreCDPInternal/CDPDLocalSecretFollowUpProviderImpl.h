@class NSString;

@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider> {
    NSString *_altDSID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;
- (void)postRepairFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)deleteLocalSecretChangeFollowUp;
- (void)postConfirmExistingSecretFollowUp;
- (void)deleteConfirmExistingSecretFollowUp;

@end
