@class NSUUID, NSArray;

@interface CPSimulatedDataCryptor : NSObject <CPDataCryptor> {
    void /* unknown type, empty encoding */ encryptionKeyID;
    void /* function */ decryptionKeyIDSet;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSUUID *encryptionKeyID;
@property (nonatomic, copy) NSArray *decryptionKeyIDSet;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)decryptData:(id)a0 keyID:(id)a1 seqNum:(unsigned long long)a2 error:(id *)a3;
- (id)encryptData:(id)a0 seqNum:(unsigned long long)a1 error:(id *)a2;

@end
