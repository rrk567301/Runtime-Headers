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

- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (id)initWithName:(id)a0 score:(double)a1 language:(id)a2 category:(unsigned int)a3;

@end
