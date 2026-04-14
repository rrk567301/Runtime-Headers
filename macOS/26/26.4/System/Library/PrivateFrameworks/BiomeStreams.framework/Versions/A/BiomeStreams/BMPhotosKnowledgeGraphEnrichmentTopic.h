@class NSString;

@interface BMPhotosKnowledgeGraphEnrichmentTopic : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double score;
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
- (id)initWithIdentifier:(id)a0 score:(double)a1;

@end
