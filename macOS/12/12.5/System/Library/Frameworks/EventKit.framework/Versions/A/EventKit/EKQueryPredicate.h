@class NSString;

@interface EKQueryPredicate : EKPredicate

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *calendarTitle;
@property (nonatomic) unsigned long long maxResults;
@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSString *customQueryString;
@property (nonatomic) BOOL disableBackingStoreUpdate;

+ (id)predicateWithCalendars:(id)a0;
+ (BOOL)string:(id)a0 containsSubstring:(id)a1;

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (unsigned long long)entityType;
- (id)initWithCalendars:(id)a0;
- (id)mdQueryString;
- (BOOL)_includeCalendarTitleInSearchTerm;

@end
