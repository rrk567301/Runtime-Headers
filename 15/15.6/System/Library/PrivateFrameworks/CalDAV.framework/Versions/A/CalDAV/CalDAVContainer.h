@class NSTimeZone, NSString, NSSet, NSURL, ICSDuration;

@interface CalDAVContainer : CoreDAVContainer

@property (nonatomic) char overrideSupportsFreebusy;
@property (readonly, nonatomic) char isCalendar;
@property (readonly, nonatomic) char isSubscribed;
@property (readonly, nonatomic) char isScheduleInbox;
@property (readonly, nonatomic) char isScheduleOutbox;
@property (readonly, nonatomic) char isNotification;
@property (readonly, nonatomic) char isSharedOwner;
@property (readonly, nonatomic) char isShared;
@property (readonly, nonatomic) char isEventContainer;
@property (readonly, nonatomic) char isTaskContainer;
@property (readonly, nonatomic) char isJournalContainer;
@property (readonly, nonatomic) char isPollContainer;
@property (readonly, nonatomic) char supportsFreebusy;
@property (readonly, nonatomic) char isFamilyCalendar;
@property (retain, nonatomic) NSString *calendarDescription;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *calendarColor;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *calendarOrder;
@property (retain, nonatomic) NSString *defaultTimedAlarms;
@property (retain, nonatomic) NSString *defaultAllDayAlarms;
@property (retain, nonatomic) NSSet *supportedCalendarComponentSet;
@property (nonatomic) char subscribedStripAlarms;
@property (nonatomic) char subscribedStripTodos;
@property (nonatomic) char subscribedStripAttachments;
@property (retain, nonatomic) ICSDuration *subscribedRefreshRate;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (nonatomic) char isScheduleTransparent;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) char canBePublished;
@property (nonatomic) char canBeShared;
@property (nonatomic) char isMarkedUndeletable;
@property (nonatomic) char isMarkedImmutableSharees;
@property (retain, nonatomic) NSURL *source;
@property (retain, nonatomic) NSSet *freeBusySet;
@property (retain, nonatomic) NSURL *scheduleDefaultCalendarURL;
@property (retain, nonatomic) NSSet *sharees;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) char autoprovisioned;
@property (retain, nonatomic) NSString *alarms;
@property (nonatomic) long long maxAttendees;

+ (id)copyPropertyMappingsForParser;

- (id)description;
- (void).cxx_destruct;
- (char)_isComponentSupportedForString:(id)a0;
- (void)postProcessWithResponseHeaders:(id)a0;
- (void)_setTimeZoneFromProperties:(id)a0 onCalendar:(id)a1;
- (void)applyParsedProperties:(id)a0;

@end
