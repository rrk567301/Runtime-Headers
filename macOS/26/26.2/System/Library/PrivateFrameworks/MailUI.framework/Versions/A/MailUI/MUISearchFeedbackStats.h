@class NSDictionary, NSMutableDictionary, NSDate;

@interface MUISearchFeedbackStats : NSObject

@property (copy, nonatomic) NSMutableDictionary *daysOfWeek;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSDate *lastReset;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (void)resetStats;
- (void)incrementCountForFailure:(BOOL)a0 forDay:(long long)a1;

@end
