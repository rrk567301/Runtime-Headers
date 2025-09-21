@class NSArray, NSString, CalPreferences, NSDate, NSNumber;

@interface CUIKPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) char showWeekNumbers;
@property (nonatomic) char weekViewStartsOnToday;
@property (nonatomic) char showListView;
@property (nonatomic) long long numDaysToShow;
@property (nonatomic) char showMonthDividedListView;
@property (nonatomic) char viewedTimeZoneAutomatic;
@property (nonatomic) char requestSyncOnApplicationLaunch;
@property (nonatomic) char drawDebugViewColors;
@property (nonatomic) char immediateAlarmCreation;
@property (nonatomic) char showExperimentalUI;
@property (nonatomic) char disableContinuity;
@property (nonatomic) char swipeToDeleteEnabled;
@property (nonatomic) char largeListViewDisclosingEventDetails;
@property (nonatomic) char showWindowDebugButton;
@property (nonatomic, getter=isShortResumeToTodayTimeout) char shortResumeToTodayTimeout;
@property (nonatomic) char hideInlineDayViewInEventDetails;
@property (nonatomic) char disableTodayPushes;
@property (nonatomic) char enableAvatars;
@property (nonatomic) char enableMultiwindowAsserts;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property (retain, nonatomic) NSNumber *weekStart;
@property (retain, nonatomic) NSNumber *lastSuspendTime;
@property (retain, nonatomic) NSNumber *lastViewedDate;
@property (retain, nonatomic) NSNumber *lastViewMode;
@property (retain, nonatomic) NSNumber *lastSidebarMode;
@property (retain, nonatomic) NSNumber *dayViewHourScale;
@property (retain, nonatomic) NSNumber *weekViewHourScale;
@property (nonatomic) unsigned long long monthViewScaleSize;
@property (nonatomic) unsigned long long monthViewEventScaleSize;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *overlayCalendarID;
@property (retain, nonatomic) NSDate *simulatedCurrentDate;
@property (retain, nonatomic) NSNumber *locationSearchResultLimit;
@property (nonatomic) char eventAutocompleteEnabled;
@property (retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) char overrideLocaleWeekends;
@property (retain, nonatomic) NSString *lastViewedOccurrenceUID;
@property (retain, nonatomic) NSDate *lastViewedOccurrenceDate;
@property (nonatomic) char scanForDiscoveredVirtualConferences;
@property (nonatomic) char displayedSubscribedCalendarSpamDetectionPrivacyNotice;
@property (nonatomic) char allowSubscribedCalendarSpamDetection;
@property (nonatomic) char perSectionShowAllHideAllButtonSpecifier;
@property (nonatomic) char showDeclinedAndCancelledEventsInWidgets;
@property (nonatomic) char debugLocationSearchResults;
@property (nonatomic) char forceAllowClearComments;

+ (id)sharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (void)resetSubscribedCalendarSpamDetectionToNull;

@end
