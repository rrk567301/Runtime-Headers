@interface DANECPAdapter : NSObject

@property (readonly, nonatomic) int necpFD;

- (id)init;
- (void)dealloc;
- (BOOL)signAddressEndpoint:(id)a0 uuidBytes:(unsigned char[16])a1 error:(id *)a2;
- (BOOL)signHostnameEndpoint:(id)a0 uuidBytes:(unsigned char[16])a1 error:(id *)a2;
- (id)signedIdentifier:(id)a0 error:(id *)a1;

@end
