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

- (id)UDID;
- (id)hardwareString;
- (Class)subscriberPluginClass;
- (id)stringForSysctlKey:(id)a0;
- (Class)publisherPluginClass;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)_accountForPersonID:(id)a0;
- (id)OSString;
- (id)socketOptions;
- (void)didDetectUnrecoverableCondition;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)a0;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (Class)deletePluginClass;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (BOOL)shouldEnableNewFeatures;
- (id)init;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)OSVersion;
- (Class)pluginClass;
- (id)pathMediaStreamDir;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (id)baseURLForPersonID:(id)a0;
- (id)contentURLForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (void).cxx_destruct;
- (BOOL)_mayPerformFileTransfer;
- (id)theDaemon;
- (void)_rereadDefaults;

@end
