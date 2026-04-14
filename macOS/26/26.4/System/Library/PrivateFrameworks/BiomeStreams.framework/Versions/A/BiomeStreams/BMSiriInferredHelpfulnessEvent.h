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

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)encodeAsProto;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProto:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 inferredHelpfulnessScore:(double)a1 restatementScore:(double)a2 turnID:(id)a3 modelID:(id)a4;
- (BOOL)isEqualToSiriInferredHelpfulnessEvent:(id)a0;

@end
