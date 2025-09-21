@class NSLocale;

@interface CLKClockExtraPreferences : CLKDistribuitedPreferences {
    NSLocale *locale;
    char userWantsToShowAMPM;
    char is24HourForced;
}

@property (nonatomic) char isClockMenuExtraVisible;
@property (readonly, nonatomic) char hasColonTimeSeparator;
@property (nonatomic) char showSeconds;
@property (nonatomic) char use24Hours;
@property (readonly) char localeSupportsAMPM;
@property (nonatomic) char showAMPM;
@property (readonly) char localeSupports24Hour;
@property (nonatomic) char showDayOfTheWeek;
@property (nonatomic) char showMonth;
@property (nonatomic) char showDayOfTheMonth;
@property (nonatomic) char showDate;

+ (id)__clockMenuExtraBundleIdentifier;
+ (id)_clockMenuExtraBundleURL;
+ (id)_clockMenuExtraBundleIdentifier;
+ (id)__clockMenuExtraBundleURL;
+ (unsigned int)_clockCoreMenuExtraID;
+ (void)_getComponentsFromDateFormat:(id)a0 showSeconds:(char *)a1 use24Hours:(char *)a2 showAMPM:(char *)a3 showDayOfTheWeek:(char *)a4 showDayOfTheMonth:(char *)a5 showMonth:(char *)a6;

- (void)dealloc;
- (id)init;
- (id)locale;
- (void)setLocale:(id)a0;
- (void)setDateFormat:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)_reloadDateFormatFromUserLocale;
- (void)_addClockMenuExtra;
- (void)_currentLocaleDidChangeNotificationHandler:(id)a0;
- (id)_dateFormatWithSeconds:(char)a0 using24Hours:(char)a1 AMPM:(char)a2 dayOfTheWeek:(char)a3 dayOfTheMonth:(char)a4 month:(char)a5 resetToDefaultTimeFormat:(char)a6;
- (id)_extraDescription;
- (void)_loadLegacyPreferences;
- (void)_menuExtraAddedNotificationHandler:(id)a0;
- (void)_menuExtraRemovedNotificationHandler:(id)a0;
- (void)_refreshLocale;
- (void)_registerForCurrentLocaleDidChangeNotification;
- (void)_registerForMenuExtraDidChangeNotifications;
- (void)_reloadDateFormat;
- (void)_removeClockMenuExtra;
- (void)_setAttribute:(char *)a0 state:(int)a1 getterSelector:(SEL)a2;
- (void)_setDateFormatWithSeconds:(int)a0 using24Hours:(int)a1 AMPM:(int)a2 dayOfTheWeek:(int)a3 dayOfTheMonth:(int)a4 month:(int)a5 resetToDefaultTimeFormat:(char)a6;
- (char)_shouldResetDateFormatSwitchingToLocale:(id)a0;
- (void)_unregisterForCurrentLocaleDidChangeNotification;
- (void)_unregisterForMenuExtraDidChangeNotifications;
- (void)_verifyClockMenuExtraWasAdded;
- (id)initWithLocale:(id)a0 persistentDomainName:(id)a1;
- (id)keyPathsForValuesAffectingFlashDateSeparators;
- (char)localeAllows12Hour;
- (void)setLocale:(id)a0 resetToDefaultDateFormat:(char)a1;
- (void)setLocaleAllows12Hour:(char)a0;

@end
