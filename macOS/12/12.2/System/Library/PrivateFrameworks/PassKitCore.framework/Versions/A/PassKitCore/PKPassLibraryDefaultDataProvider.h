@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {
    PKPassLibrary *_library;
}

@property (readonly, nonatomic) BOOL canAddPaymentPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)passWithUniqueID:(id)a0;
- (id)initWithPassLibrary:(id)a0;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
- (id)peerPaymentPassUniqueID;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (void)removePass:(id)a0;
- (id)paymentPasses;

@end
