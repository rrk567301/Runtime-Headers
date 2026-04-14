@interface ContactsFoundation.CNKeychainFacade : NSObject <ContactsFoundation.CNKeychainFacadeProtocol>

- (void).cxx_destruct;
- (id)init;
- (id)createSymmetricKeyIfNeededWithLabel:(id)a0;
- (id)existingSymmetricKeyWithLabel:(id)a0;
- (id)removeEncryptionKeyWithLabel:(id)a0;

@end
