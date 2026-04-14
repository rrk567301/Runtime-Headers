@class NSString, GDPersonRankingService, GDPersonRankingServiceConfiguration;

@interface CESRMegadomeContactPriorRetriever : NSObject <CESRPriorRetriever> {
    GDPersonRankingServiceConfiguration *_rankerConfig;
    GDPersonRankingService *_ranker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_fetchTopNContactPriors:(long long)a0 error:(id *)a1;
- (id)allPriorInfoWithThreshold:(unsigned int)a0;
- (id)priorInfoForItemIds:(id)a0;

@end
