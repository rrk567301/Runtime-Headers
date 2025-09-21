@interface PARUsageEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int clientIntVal;
@property (nonatomic) char invokedDays;
@property (nonatomic) char zkwEngagedDays;
@property (nonatomic) char searchedDays;
@property (nonatomic) char suggestionOrAppleResultEngagedDays;
@property (nonatomic) char webEngagedDays;
@property (nonatomic) char voiceSearchDays;
@property (nonatomic) int numSearchEngagements;
@property (nonatomic) char activeDays;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
