@class NSString;

@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider> {
    NSString *_altDSID;
}

@property (copy, nonatomic) NSString *telemetryFlowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)deleteLocalSecretChangeFollowUp;
- (void)deleteConfirmExistingSecretFollowUp;
- (void)deleteCreatePasscodeFollowUp;
- (id)initWithAltDSID:(id)a0 telemetryFlowID:(id)a1;
- (void)postConfirmExistingSecretFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
