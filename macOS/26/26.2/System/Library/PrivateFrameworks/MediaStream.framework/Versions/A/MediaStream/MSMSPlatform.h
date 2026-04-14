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

- (Class)publisherPluginClass;
- (BOOL)shouldEnableNewFeatures;
- (id)baseURLForPersonID:(id)a0;
- (void)didDetectUnrecoverableCondition;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (Class)deletePluginClass;
- (BOOL)isPerformanceLoggingEnabled;
- (id)pushTokenForPersonID:(id)a0;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (id)appBundleInfoString;
- (Class)subscriberPluginClass;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (BOOL)_mayPerformFileTransfer;
- (void).cxx_destruct;
- (id)_accountForPersonID:(id)a0;
- (void)_rereadDefaults;
- (id)hardwareString;
- (Class)pluginClass;
- (id)contentURLForPersonID:(id)a0;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (BOOL)policyMayUpload;
- (id)OSString;
- (id)theDaemon;
- (BOOL)policyMayDownload;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)init;
- (id)authTokenForPersonID:(id)a0;
- (id)socketOptions;
- (id)UDID;
- (id)OSVersion;
- (id)pathMediaStreamDir;
- (id)stringForSysctlKey:(id)a0;

@end
