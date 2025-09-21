@class NSString;

@interface BMPhotosKnowledgeGraphEnrichmentEntity : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) unsigned int category;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)serialize;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 score:(double)a1 language:(id)a2 category:(unsigned int)a3;

@end
