@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)CFNetworkLogging;
+ (BOOL)compressRequests;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (long long)rem_changeTrackingBehaviors;
+ (id)APSEnv;
+ (void)_startListeningForNotifications;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (double)defaultDAVProbeTimeout;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)ignoreSupportedCommands;
+ (int)refreshThrottleTime;
+ (BOOL)ignoreBadLDAPCerts;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (id)allowlistedEASProtocols;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (BOOL)cookiesEnabled;
+ (BOOL)enablePromptForServerTrust;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)perfLogging;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)useContactsFramerwork;
+ (BOOL)earlyPingEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (id)holidayCalendarURL;
+ (double)holidayCalendarRefreshInterval;
+ (int)numForgivable401s;
+ (BOOL)isEASParsingLogEnabled;
+ (id)_daManagedDefaultsPath;
+ (id)DAManagedDefaults;
+ (BOOL)setDAManagedDefaults:(id)a0;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (void)removeDAManagedDefaults:(id)a0;

@end
