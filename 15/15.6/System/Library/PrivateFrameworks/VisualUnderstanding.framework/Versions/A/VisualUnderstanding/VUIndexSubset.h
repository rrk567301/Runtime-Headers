@class NSDate;

@interface VUIndexSubset : NSManagedObject

@property (nonatomic) long long contextualEmbeddingRevision;
@property (nonatomic) long long embeddingRevision;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic) char staleObservations;
@property (nonatomic) char staleTags;
@property (nonatomic) short type;
@property (nonatomic) char usingVectorStore;
@property (nonatomic) int version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
