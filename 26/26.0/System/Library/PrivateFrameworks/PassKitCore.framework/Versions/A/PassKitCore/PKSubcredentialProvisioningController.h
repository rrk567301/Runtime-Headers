@class PKPaymentPass, NSString, PKAppletSubcredential;
@protocol PKSubcredentialProvisioningControllerDelegate;

@interface PKSubcredentialProvisioningController : NSObject <PKSessionDelegate>

@property (weak, nonatomic) id<PKSubcredentialProvisioningControllerDelegate> delegate;
@property (readonly, nonatomic) PKAppletSubcredential *addedCredential;
@property (readonly, nonatomic) PKPaymentPass *provisionedPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
