@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPWebRTCSFrameConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *audioCipherSuite;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *videoCipherSuite;
@property (retain, nonatomic) NSData *baseKey;
@property (retain, nonatomic) NSData *keyID;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *ratchetBits;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *ratchetTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithAudioCipherSuite:(id)a0 videoCipherSuite:(id)a1 baseKey:(id)a2 keyID:(id)a3 ratchetBits:(id)a4 ratchetTime:(id)a5;

@end
