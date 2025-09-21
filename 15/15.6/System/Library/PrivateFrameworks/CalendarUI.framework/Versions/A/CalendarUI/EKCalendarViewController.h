@class EKCalendar;

@interface EKCalendarViewController : EKViewController

@property (retain, nonatomic) EKCalendar *calendar;

+ (id)emptyPlaceholderTitleString;
+ (id)newPlaceholderTitleString;

- (id)initWithSettings:(id)a0;
- (void)addNewSharees:(id)a0;
- (char)calendarSupportsPublishing;
- (char)calendarSupportsSharing;
- (double)defaultLabelWidth;
- (id)infoViewPublicURL;
- (char)isCalendarFamilyCalendar;
- (char)isCalendarMarkedImmutableSharees;
- (char)isCalendarPubSub;
- (char)isCalendarPublicallyShared;
- (char)isCalendarPublished;
- (char)isCalendarSharedToMe;
- (char)isCalendarSubscribed;

@end
