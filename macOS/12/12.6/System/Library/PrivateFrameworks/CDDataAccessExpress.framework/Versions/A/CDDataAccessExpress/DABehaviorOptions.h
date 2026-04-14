@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)CFNetworkLogging;
+ (BOOL)compressRequests;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (id)APSEnv;
+ (long long)rem_changeTrackingBehaviors;
+ (void)_startListeningForNotifications;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)orphanCheckEnabled;
+ (double)defaultDAVProbeTimeout;
+ (id)_daManagedDefaultsPath;
+ (id)DAManagedDefaults;
+ (BOOL)setDAManagedDefaults:(id)a0;
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
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (void)removeDAManagedDefaults:(id)a0;

@end
