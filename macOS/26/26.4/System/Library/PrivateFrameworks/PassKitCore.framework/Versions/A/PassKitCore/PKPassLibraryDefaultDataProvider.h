@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {
    PKPassLibrary *_library;
}

@property (readonly, nonatomic) BOOL canAddPaymentPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0 outError:(id *)a1;
- (id)passWithUniqueID:(id)a0;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)removePass:(id)a0;
- (id)init;
- (id)passes;
- (id)peerPaymentPassUniqueID;
- (unsigned long long)countOfPasses;
- (id)passForProvisioningCredentialHash:(id)a0;
- (id)initWithPassLibrary:(id)a0;
- (id)paymentPasses;

@end
