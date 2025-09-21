@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (char)CFNetworkLogging;
+ (char)compressRequests;
+ (char)isAppleInternalInstall;
+ (id)APSEnv;
+ (char)alwaysUseCalendarHomeSync;
+ (char)calDAVRemindersForAll;
+ (long long)rem_changeTrackingBehaviors;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (char)babysitterEnabled;
+ (char)isInHoldingPattern;
+ (char)promptForAllCerts;
+ (double)defaultDAVProbeTimeout;
+ (char)orphanCheckEnabled;
+ (void)_startListeningForNotifications;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (char)_shouldForceCookies:(char *)a0;
+ (char)addDAManagedDefaults:(id)a0;
+ (char)allIMAPServersSupportNotesSearch;
+ (id)allowlistedEASProtocols;
+ (char)completelyIgnoreNotes;
+ (char)cookiesEnabled;
+ (char)customAutoDV2UserAgentEnabled;
+ (double)defaultEASTaskTimeoutOutWasFound:(char *)a0;
+ (char)earlyPingEnabled;
+ (char)enablePromptForServerTrust;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (char)ignoreBadLDAPCerts;
+ (char)ignoreSupportedCommands;
+ (char)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (char)perfLogging;
+ (int)refreshThrottleTime;
+ (void)removeDAManagedDefaults:(id)a0;
+ (char)sendMeCardEverywhere;
+ (char)setDAManagedDefaults:(id)a0;
+ (char)useContactsFramerwork;
+ (char)useThunderhillBetaServers;
+ (char)writeOutBrokenCancelationRequests;

@end
