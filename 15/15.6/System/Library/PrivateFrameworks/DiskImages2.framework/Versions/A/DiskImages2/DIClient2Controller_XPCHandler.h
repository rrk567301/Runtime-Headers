@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler

- (id)remoteObjectInterface;
- (id)serviceName;
- (char)connectWithError:(id *)a0;
- (char)GUIAskForPassphraseWithEncryptionFrontend:(id)a0 error:(id *)a1;
- (char)createAndStoreInSystemKeychainWithCreator:(id)a0 account:(id)a1 error:(id *)a2;
- (char)keychainUnlockWithEncryptionUnlocker:(id)a0 error:(id *)a1;
- (id)newAttachWithParams:(id)a0 error:(id *)a1;

@end
