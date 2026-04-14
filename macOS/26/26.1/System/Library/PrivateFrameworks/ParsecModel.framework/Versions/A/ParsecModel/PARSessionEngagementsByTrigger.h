@class NSDate;

@interface PARSessionEngagementsByTrigger : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short client;
@property (nonatomic) short go;
@property (nonatomic) BOOL isSuggestion;
@property (nonatomic) BOOL isTopHit;
@property (nonatomic) short tap;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
