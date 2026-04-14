@class PPSource, NSMutableArray, NSMutableDictionary;

@interface PPScoredExtractionSet : NSObject <SGExternalEnrichment>

@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSMutableArray *topics;
@property (retain, nonatomic) NSMutableArray *topicsExactMatchesInSourceText;
@property (retain, nonatomic) NSMutableDictionary *locations;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned long long entityAlgorithm;
@property (nonatomic) unsigned long long topicAlgorithm;
@property (nonatomic) BOOL cloudSync;
@property (nonatomic) double decayRate;
@property (nonatomic) double sentimentScore;

- (id)description;
- (void).cxx_destruct;
- (void)addLocation:(id)a0 algorithm:(unsigned short)a1;
- (void)writeSynchronous;
- (void)writeWithEntityStore:(id)a0;
- (void)flushWrites;
- (id)numberOfExtractions;
- (unsigned long long)_donateLocationsWithContextualNamedEntities:(id)a0;

@end
