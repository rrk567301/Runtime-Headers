@class EKCalendar;

@interface EKCalendarViewController : EKViewController

@property (retain, nonatomic) EKCalendar *calendar;

+ (id)newPlaceholderTitleString;
+ (id)emptyPlaceholderTitleString;

- (id)initWithSettings:(id)a0;
- (BOOL)calendarSupportsSharing;
- (BOOL)isCalendarSharedToMe;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)isCalendarFamilyCalendar;
- (double)defaultLabelWidth;
- (id)infoViewPublicURLString;
- (BOOL)calendarSupportsPublishing;
- (BOOL)isCalendarPublicallyShared;
- (BOOL)isCalendarPubSub;
- (BOOL)isCalendarSubscribed;
- (BOOL)isCalendarPublished;

@end
