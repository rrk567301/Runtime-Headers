@class NSString, NSData, NSNumber;

@interface AKPDPBlobGenerationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *password;
@property (readonly) NSData *verifier;
@property (readonly) NSString *srpSalt;
@property (readonly) NSData *srpSaltData;
@property (readonly) NSNumber *srpIteration;
@property (readonly) NSNumber *srpPasswordVersion;
@property (readonly) NSString *srpProtocol;
@property (readonly) NSString *telemetryFlowID;
@property (readonly) NSString *altDSID;

+ (id)_decodeSaltFromBase64:(id)a0 error:(id *)a1;
+ (id)_generateVerifierWithPassword:(id)a0 salt:(id)a1 iteration:(id)a2 protocol:(id)a3 error:(id *)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPassword:(id)a0 clientInfo:(id)a1 telemetryFlowID:(id)a2 altDSID:(id)a3 error:(id *)a4;
- (id)initWithPassword:(id)a0 verifier:(id)a1 srpSalt:(id)a2 srpSaltData:(id)a3 srpIteration:(id)a4 srpPasswordVersion:(id)a5 srpProtocol:(id)a6 telemetryFlowID:(id)a7 altDSID:(id)a8;

@end
