@class _EARNLEntityTagger;

@interface _EAREntityTagger : NSObject <_EntityTaggingProtocol>

@property (nonatomic, readonly) _EARNLEntityTagger *earNLTagger;

- (id)modelVersion;
- (void).cxx_destruct;
- (id)init;
- (id)tagEntitiesIn:(id)a0;
- (id)tagEntitiesInArray:(id)a0;
- (id)tagEntitiesWithTagNamesIn:(id)a0;

@end
