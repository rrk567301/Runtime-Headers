@class NSMutableDictionary, NSMutableSet, CESRSpeechProfileMetrics, NSObject;
@protocol OS_dispatch_group, _EntityTaggingProtocol;

@interface CESREntityExtractionHandler : NSObject {
    CESRSpeechProfileMetrics *_metrics;
    NSMutableSet *_codepathIds;
    id<_EntityTaggingProtocol> _entityTagger;
    NSMutableDictionary *_entitiesExtractedPerCategory;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

+ (id)_fetchExtractedEntityMappingsForEntities:(id)a0 extractionVocabLabels:(id)a1 originalInputString:(id)a2;

- (void).cxx_destruct;
- (void)_initializeEntityTaggerWithAssetPath:(id)a0;
- (id)initWithSpeechProfileMetrics:(id)a0 codepathIds:(id)a1 entitiesExtractedPerCategory:(id)a2 applicableSpeechCategories:(id)a3 assetPath:(id)a4;
- (id)performEntityExtraction:(id)a0 extractionVocabLabels:(id)a1;

@end
