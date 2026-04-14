@class NSString;

@interface BMSiriQueryResult : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *qid;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double confidence;
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
- (id)initWithQID:(id)a0 domain:(id)a1 confidence:(double)a2;

@end
