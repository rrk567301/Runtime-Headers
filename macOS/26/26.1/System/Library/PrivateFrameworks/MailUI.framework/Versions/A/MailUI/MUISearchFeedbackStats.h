@class NSDictionary, NSMutableDictionary, NSDate;

@interface MUISearchFeedbackStats : NSObject

@property (copy, nonatomic) NSMutableDictionary *daysOfWeek;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSDate *lastReset;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetStats;
- (void)incrementCountForFailure:(BOOL)a0 forDay:(long long)a1;

@end
