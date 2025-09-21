@class NSIndexSet, NSDictionary, NSDate;

@interface PGSuggestionOptions : NSObject

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions;
@property (nonatomic) unsigned long long maximumNumberOfSuggestions;
@property (nonatomic) char allowNotification;
@property (nonatomic) char shouldProcessExistingSuggestions;
@property (nonatomic) char discardGeneratedSuggestions;
@property (nonatomic) char clearFeaturedSuggestions;
@property (nonatomic) char ignoreCollisionsWithExistingSuggestions;
@property (nonatomic) char ignoreCollisionsWithSameBatchSuggestions;
@property (retain, nonatomic) NSIndexSet *suggestionTypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionTypeBlocklist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeBlocklist;
@property (nonatomic) char generateInvalidSuggestions;
@property (nonatomic) char computeReasons;
@property (nonatomic) char noLimitPerFeature;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;
- (void)setDefaultStartAndEndDatesIfNeeded;
- (void)setDefaultStartAndEndDatesIfNeededWithNumberOfDays:(long long)a0;

@end
