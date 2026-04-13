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

- (id)init;
- (void).cxx_destruct;
- (id)OSVersion;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (id)contentURLForPersonID:(id)a0;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)shouldLogAtLevel:(int)a0;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)pathMediaStreamDir;
- (Class)publisherPluginClass;
- (Class)subscriberPluginClass;
- (id)UDID;
- (id)hardwareString;
- (id)OSString;
- (id)appBundleInfoString;
- (BOOL)policyMayUpload;
- (BOOL)policyMayDownload;
- (id)socketOptions;
- (id)baseURLForPersonID:(id)a0;
- (id)authTokenForPersonID:(id)a0;
- (id)theDaemon;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (void)_rereadDefaults;
- (Class)pluginClass;
- (id)stringForSysctlKey:(id)a0;
- (BOOL)_mayPerformFileTransfer;
- (id)_accountForPersonID:(id)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;

@end
