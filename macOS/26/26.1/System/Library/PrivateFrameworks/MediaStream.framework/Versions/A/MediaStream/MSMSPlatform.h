@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thePlatform;

- (id)socketOptions;
- (BOOL)isPerformanceLoggingEnabled;
- (id)authTokenForPersonID:(id)a0;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (BOOL)shouldEnableNewFeatures;
- (id)OSString;
- (id)contentURLForPersonID:(id)a0;
- (id)hardwareString;
- (id)baseURLForPersonID:(id)a0;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (BOOL)policyMayUpload;
- (void).cxx_destruct;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)stringForSysctlKey:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (id)theDaemon;
- (void)didDetectUnrecoverableCondition;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (Class)pluginClass;
- (BOOL)policyMayDownload;
- (Class)deletePluginClass;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)UDID;
- (BOOL)_mayPerformFileTransfer;
- (id)OSVersion;
- (id)pathMediaStreamDir;
- (void)_rereadDefaults;
- (id)pushTokenForPersonID:(id)a0;
- (Class)subscriberPluginClass;
- (id)appBundleInfoString;
- (Class)publisherPluginClass;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)init;

@end
