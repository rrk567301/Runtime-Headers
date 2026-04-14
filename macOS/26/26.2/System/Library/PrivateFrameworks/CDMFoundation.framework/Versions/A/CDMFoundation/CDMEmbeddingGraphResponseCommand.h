@class CDMEmbeddingProtoResponseCommand;

@interface CDMEmbeddingGraphResponseCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMEmbeddingProtoResponseCommand *embeddingProtoResponseCommand;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)convertResponseToSubwordResponse;
- (id)initWithEmbeddingProtoResponseCommand:(id)a0;

@end
