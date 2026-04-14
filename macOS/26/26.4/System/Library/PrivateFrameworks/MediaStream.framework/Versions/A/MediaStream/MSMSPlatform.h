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

- (Class)pluginClass;
- (id)contentURLForPersonID:(id)a0;
- (void)_rereadDefaults;
- (id)pathMediaStreamDir;
- (id)hardwareString;
- (BOOL)policyMayUpload;
- (id)OSVersion;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)appBundleInfoString;
- (id)OSString;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)socketOptions;
- (BOOL)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)a0;
- (id)theDaemon;
- (BOOL)policyMayDownload;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (id)stringForSysctlKey:(id)a0;
- (Class)subscriberPluginClass;
- (BOOL)isPerformanceLoggingEnabled;
- (void)didDetectUnrecoverableCondition;
- (id)baseURLForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (Class)publisherPluginClass;
- (BOOL)_mayPerformFileTransfer;
- (id)UDID;
- (id)init;
- (BOOL)shouldLogAtLevel:(int)a0;
- (Class)deletePluginClass;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)authTokenForPersonID:(id)a0;
- (id)_accountForPersonID:(id)a0;

@end
