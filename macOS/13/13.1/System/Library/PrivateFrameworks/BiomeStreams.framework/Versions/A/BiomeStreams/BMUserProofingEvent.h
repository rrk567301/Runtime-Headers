@class NSString;

@interface BMUserProofingEvent : NSObject <BMStoreData, BMProtoBufWrapper, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *age;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)deviceRegion;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithAbsoluteTimestamp:(double)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 deviceLanguage:(id)a4 proofingDecision:(id)a5 issuer:(id)a6;

@end
