@class NSArray, NSNumber;

@interface PLMediaAnalysisEmbeddingSearchOptions : NSObject

@property (readonly, nonatomic) int resultLimit;
@property (retain, nonatomic) NSArray *assetUUIDsForPrefilter;
@property (nonatomic) char fullScan;
@property (retain, nonatomic) NSNumber *numConcurrentReaders;

- (void).cxx_destruct;
- (id)initWithResultLimit:(int)a0;

@end
