@interface MicroLocationDaemon.ULEncryption : NSObject

+ (id)decryptData:(id)a0 keyLabel:(id)a1;
+ (id)encryptData:(id)a0 keyLabel:(id)a1;
+ (char)decryptFile:(id)a0 destinationPath:(id)a1 keyLabel:(id)a2 keychainClass:(Class)a3;
+ (char)encryptFile:(id)a0 destinationPath:(id)a1 keyLabel:(id)a2 keychainClass:(Class)a3;

- (id)init;
- (void).cxx_destruct;

@end
