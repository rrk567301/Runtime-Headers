@class NSLocale;

@interface CLKClockExtraPreferences : CLKDistribuitedPreferences {
    NSLocale *locale;
    BOOL userWantsToShowAMPM;
    BOOL is24HourForced;
}

@property (nonatomic) BOOL isClockMenuExtraVisible;
@property (readonly, nonatomic) BOOL hasColonTimeSeparator;
@property (nonatomic) BOOL showSeconds;
@property (nonatomic) BOOL use24Hours;
@property (readonly) BOOL localeSupportsAMPM;
@property (nonatomic) BOOL showAMPM;
@property (readonly) BOOL localeSupports24Hour;
@property (nonatomic) BOOL showDayOfTheWeek;
@property (nonatomic) BOOL showMonth;
@property (nonatomic) BOOL showDayOfTheMonth;
@property (nonatomic) BOOL showDate;

+ (id)__clockMenuExtraBundleURL;
+ (id)_clockMenuExtraBundleURL;
+ (id)__clockMenuExtraBundleIdentifier;
+ (id)_clockMenuExtraBundleIdentifier;
+ (unsigned int)_clockCoreMenuExtraID;
+ (void)_getComponentsFromDateFormat:(id)a0 showSeconds:(BOOL *)a1 use24Hours:(BOOL *)a2 showAMPM:(BOOL *)a3 showDayOfTheWeek:(BOOL *)a4 showDayOfTheMonth:(BOOL *)a5 showMonth:(BOOL *)a6;

- (void)dealloc;
- (id)init;
- (void)setLocale:(id)a0;
- (id)locale;
- (void)setDateFormat:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)_menuExtraAddedNotificationHandler:(id)a0;
- (void)_menuExtraRemovedNotificationHandler:(id)a0;
- (void)_verifyClockMenuExtraWasAdded;
- (void)_registerForMenuExtraDidChangeNotifications;
- (void)_refreshLocale;
- (void)_currentLocaleDidChangeNotificationHandler:(id)a0;
- (id)initWithLocale:(id)a0 persistentDomainName:(id)a1;
- (id)_extraDescription;
- (void)_unregisterForMenuExtraDidChangeNotifications;
- (void)_addClockMenuExtra;
- (void)_removeClockMenuExtra;
- (id)_dateFormatWithSeconds:(BOOL)a0 using24Hours:(BOOL)a1 AMPM:(BOOL)a2 dayOfTheWeek:(BOOL)a3 dayOfTheMonth:(BOOL)a4 month:(BOOL)a5 resetToDefaultTimeFormat:(BOOL)a6;
- (void)_setAttribute:(BOOL *)a0 state:(int)a1 getterSelector:(SEL)a2;
- (void)_setDateFormatWithSeconds:(int)a0 using24Hours:(int)a1 AMPM:(int)a2 dayOfTheWeek:(int)a3 dayOfTheMonth:(int)a4 month:(int)a5 resetToDefaultTimeFormat:(BOOL)a6;
- (void)_reloadDateFormat;
- (void)_reloadDateFormatFromUserLocale;
- (void)setLocale:(id)a0 resetToDefaultDateFormat:(BOOL)a1;
- (BOOL)_shouldResetDateFormatSwitchingToLocale:(id)a0;
- (void)_registerForCurrentLocaleDidChangeNotification;
- (void)_unregisterForCurrentLocaleDidChangeNotification;
- (void)_loadLegacyPreferences;
- (id)keyPathsForValuesAffectingFlashDateSeparators;
- (void)setLocaleAllows12Hour:(BOOL)a0;
- (BOOL)localeAllows12Hour;

@end
