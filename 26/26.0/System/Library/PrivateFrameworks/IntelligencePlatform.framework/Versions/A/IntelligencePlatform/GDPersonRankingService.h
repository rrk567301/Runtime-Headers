@class _TtC20IntelligencePlatform20PersonRankingService;

@interface GDPersonRankingService : NSObject {
    _TtC20IntelligencePlatform20PersonRankingService *_innerService;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)rankedPersonsWithMaxCount:(long long)a0 error:(id *)a1;

@end
