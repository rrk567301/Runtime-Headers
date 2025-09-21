@class AKPVSignaturePayload, NSData;

@interface PVDummySignature : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char cannotDecrypt;
@property (retain) AKPVSignaturePayload *payload;
@property (retain) NSData *undecryptedData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)decrypt;
- (char)isDecrypted;

@end
