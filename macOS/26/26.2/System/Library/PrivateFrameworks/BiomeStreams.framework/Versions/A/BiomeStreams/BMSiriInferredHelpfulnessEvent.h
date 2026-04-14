@class NSString;

@interface BMSiriInferredHelpfulnessEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) double inferredHelpfulnessScore;
@property (readonly, nonatomic) double restatementScore;
@property (readonly, copy, nonatomic) NSString *turnID;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)encodeAsProto;
- (id)json;
- (id)initWithAbsoluteTimestamp:(double)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 inferredHelpfulnessScore:(double)a1 restatementScore:(double)a2 turnID:(id)a3 modelID:(id)a4;
- (BOOL)isEqualToSiriInferredHelpfulnessEvent:(id)a0;

@end
