@class EKCalendar;

@interface EKCalendarViewController : EKViewController

@property (retain, nonatomic) EKCalendar *calendar;

+ (id)newPlaceholderTitleString;
+ (id)emptyPlaceholderTitleString;

- (id)initWithSettings:(id)a0;
- (BOOL)isCalendarSharedToMe;
- (BOOL)isCalendarPublicallyShared;
- (BOOL)calendarSupportsPublishing;
- (BOOL)isCalendarPubSub;
- (BOOL)isCalendarFamilyCalendar;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)calendarSupportsSharing;
- (double)defaultLabelWidth;
- (id)infoViewPublicURLString;
- (BOOL)isCalendarSubscribed;
- (BOOL)isCalendarPublished;

@end
