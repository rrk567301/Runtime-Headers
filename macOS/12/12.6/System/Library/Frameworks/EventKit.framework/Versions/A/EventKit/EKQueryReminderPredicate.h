@class NSString, NSDate;

@interface EKQueryReminderPredicate : EKQueryPredicate {
    NSString *_title;
    NSString *_calendarTitle;
    NSString *_searchTerm;
    unsigned long long _maxResults;
}

@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL limitToCompletedOrIncomplete;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSDate *dueAfter;
@property (retain, nonatomic) NSDate *dueBefore;
@property (nonatomic) BOOL useCompletionDateAsAlternate;
@property (nonatomic) BOOL useDueDateAsCompletionDate;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL hasContactIdentifier;

+ (id)predicateWithCalendars:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setMaxResults:(unsigned long long)a0;
- (unsigned long long)maxResults;
- (unsigned long long)entityType;
- (id)searchTerm;
- (void)setSearchTerm:(id)a0;
- (id)initWithCalendars:(id)a0;
- (void)setCalendarTitle:(id)a0;
- (id)calendarTitle;
- (BOOL)hasFastPathWithStore:(id)a0;
- (id)fastPathResultWithStore:(id)a0;
- (id)mdQueryString;
- (BOOL)_includeCalendarTitleInSearchTerm;
- (BOOL)_isReminderContactIdentifierExactly;
- (BOOL)_isReminderCompletionExactly;
- (BOOL)_isCalendarsExactly;
- (BOOL)_isRemindersWithDueDatesExactly;
- (BOOL)_isSubsetOfRemindersWithDueDatesExactly;
- (BOOL)_isSubsetOfRemindersCompletionExactly;

@end
