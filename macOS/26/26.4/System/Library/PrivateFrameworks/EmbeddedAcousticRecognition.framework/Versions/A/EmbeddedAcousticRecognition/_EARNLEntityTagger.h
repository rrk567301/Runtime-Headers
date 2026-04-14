@class NSArray, NLTagger;

@interface _EARNLEntityTagger : NSObject <_EntityTaggingProtocol> {
    void /* function */ supportedTags;
}

@property (nonatomic, retain) NLTagger *nlTagger;
@property (nonatomic) unsigned long long tagOptions;
@property (nonatomic, copy) NSArray *supportedTags;

+ (id)configureWithTimeout:(double)a0;

- (id)modelVersion;
- (void).cxx_destruct;
- (id)init;
- (id)tagEntitiesIn:(id)a0;
- (id)tagEntitiesInArray:(id)a0;
- (id)tagEntitiesWithTagNamesIn:(id)a0;

@end
