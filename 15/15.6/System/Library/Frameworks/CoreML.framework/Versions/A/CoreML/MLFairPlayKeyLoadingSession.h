@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject

@property (copy) NSString *keyIdentifier;
@property unsigned int sessionID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)generateKeyRequestForKeyIdentifier:(id)a0 teamIdentifier:(id)a1 error:(id *)a2;
- (id)generatePersistentKeyBlobFromKeyResponse:(id)a0 error:(id *)a1;
- (id)transformKeyIdentifier:(id)a0 error:(id *)a1;

@end
