@class NSString;

@interface WFMetricStatusEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (nonatomic) char installed;
@property (nonatomic) char sharingEnabled;
@property (nonatomic) char personalAutomationsEnabled;
@property (nonatomic) char homeAutomationsEnabled;
@property (nonatomic) char sleepEnabled;
@property (nonatomic) unsigned int shortcutComplicationSlotsUsed;
@property (nonatomic) unsigned int appComplicationSlotsUsed;
@property (nonatomic) unsigned int averageShortcutCountPerFolder;
@property (nonatomic) unsigned int shortcutsCount;
@property (nonatomic) unsigned int uncategorizedShortcutCount;
@property (nonatomic) unsigned int watchShortcutCount;
@property (nonatomic) unsigned int folderCount;
@property (nonatomic) unsigned int numberOfPersonalAutomationsEnabled;
@property (nonatomic) unsigned int numberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) unsigned int shortcutRunCount;
@property (nonatomic) unsigned int appSessionCount;
@property (nonatomic) unsigned int sleepShortcutsCount;
@property (nonatomic) unsigned int numberOfSmallWidgets;
@property (nonatomic) unsigned int numberOfSmallMultiShortcutWidgets;
@property (nonatomic) unsigned int numberOfMediumWidgets;
@property (nonatomic) unsigned int numberOfLargeWidgets;
@property (nonatomic) unsigned int numberOfExtraLargeWidgets;
@property (nonatomic) unsigned int numberOfWidgetsOnHomeScreen;
@property (nonatomic) unsigned int numberOfWidgetsOnLoL;
@property (nonatomic) unsigned int numberOfLockScreenWidgets;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGenerated;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (nonatomic) unsigned int numberOfRemoteWidgetsSetup;
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic) char autoShortcutsSectionsViewed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
