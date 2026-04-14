@class CDMEmbeddingProtoResponseCommand;

@interface CDMEmbeddingGraphResponseCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMEmbeddingProtoResponseCommand *embeddingProtoResponseCommand;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)convertResponseToSubwordResponse;
- (id)initWithEmbeddingProtoResponseCommand:(id)a0;

@end
