@class NSData;

@interface CIDCSessionCryptarch : NSObject {
    void /* unknown type, empty encoding */ sessionCryptarch;
}

@property (nonatomic, readonly) unsigned long long curve;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) unsigned long long variant;
@property (nonatomic, readonly) NSData *privateKey;
@property (nonatomic, readonly) NSData *publicKey;

- (id)encryptData:(id)a0 error:(id *)a1;
- (id)init;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)deriveSessionKeysFromSessionTranscript:(id)a0 error:(id *)a1;
- (BOOL)deriveSessionKeysFromSessionTranscript:(id)a0 intermediateKeyMaterial:(id)a1 error:(id *)a2;
- (id)initWithRole:(unsigned long long)a0 curve:(unsigned long long)a1 variant:(unsigned long long)a2;
- (id)initWithRole:(unsigned long long)a0 curve:(unsigned long long)a1 variant:(unsigned long long)a2 localKey:(id)a3 error:(id *)a4;
- (BOOL)setRemoteKey:(id)a0 error:(id *)a1;

@end
