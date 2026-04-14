@class NSUUID, NSDate, KTVerifierResult;

@interface IDSIDKTData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *verificationRequestID;
@property (readonly, copy, nonatomic) KTVerifierResult *verifierResult;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVerifierResult:(id)a0 requestID:(id)a1 timestamp:(id)a2;

@end
