@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (char)CFNetworkLogging;
+ (char)compressRequests;
+ (char)isAppleInternalInstall;
+ (id)APSEnv;
+ (char)alwaysUseCalendarHomeSync;
+ (char)calDAVRemindersForAll;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (char)babysitterEnabled;
+ (char)isInHoldingPattern;
+ (char)promptForAllCerts;
+ (double)defaultDAVProbeTimeout;
+ (char)orphanCheckEnabled;
+ (void)_startListeningForNotifications;
+ (char)_shouldForceCookies:(char *)a0;
+ (char)addDAManagedDefaults:(id)a0;
+ (char)allIMAPServersSupportNotesSearch;
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
+ (char)useContactsFramerwork;
+ (char)useThunderhillBetaServers;
+ (char)writeOutBrokenCancelationRequests;
+ (char)enableAutomaticAttachmentDownloads;
+ (char)useContactsFramework;
+ (id)whitelistedEASProtocols;

@end
