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

- (BOOL)policyMayUpload;
- (id)OSVersion;
- (Class)pluginClass;
- (id)_accountForPersonID:(id)a0;
- (id)OSString;
- (BOOL)isPerformanceLoggingEnabled;
- (id)init;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (id)stringForSysctlKey:(id)a0;
- (id)contentURLForPersonID:(id)a0;
- (id)hardwareString;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)authTokenForPersonID:(id)a0;
- (BOOL)_mayPerformFileTransfer;
- (id)socketOptions;
- (void).cxx_destruct;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (Class)deletePluginClass;
- (BOOL)shouldEnableNewFeatures;
- (id)UDID;
- (id)baseURLForPersonID:(id)a0;
- (id)theDaemon;
- (id)pushTokenForPersonID:(id)a0;
- (void)didDetectUnrecoverableCondition;
- (void)_rereadDefaults;
- (Class)publisherPluginClass;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (Class)subscriberPluginClass;
- (id)appBundleInfoString;
- (id)pathMediaStreamDir;
- (BOOL)policyMayDownload;

@end
