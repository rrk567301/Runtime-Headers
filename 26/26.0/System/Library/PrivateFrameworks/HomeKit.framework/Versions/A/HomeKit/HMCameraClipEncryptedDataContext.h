@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying>

@property (readonly, copy) NSData *initializationVector;
@property (readonly, copy) NSData *ciphertext;
@property (readonly, copy) NSData *tag;
@property (readonly, copy) NSData *dataRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitializationVector:(id)a0 ciphertext:(id)a1 tag:(id)a2;

@end
