@class NSDate;

@interface PARSessionEngagementsByTrigger : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short client;
@property (nonatomic) short go;
@property (nonatomic) char isSuggestion;
@property (nonatomic) char isTopHit;
@property (nonatomic) short tap;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
