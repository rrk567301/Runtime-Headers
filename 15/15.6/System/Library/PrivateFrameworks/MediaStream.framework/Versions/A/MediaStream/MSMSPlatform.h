@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) char isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thePlatform;

- (id)init;
- (void).cxx_destruct;
- (id)OSVersion;
- (void)_rereadDefaults;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)OSString;
- (void)didDetectUnrecoverableCondition;
- (char)policyMayUpload;
- (id)UDID;
- (id)_accountForPersonID:(id)a0;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (char)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)a0;
- (id)baseURLForPersonID:(id)a0;
- (id)contentURLForPersonID:(id)a0;
- (Class)deletePluginClass;
- (id)hardwareString;
- (char)isPerformanceLoggingEnabled;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;
- (id)pathMediaStreamDir;
- (char)personIDUsesProductionPushEnvironment:(id)a0;
- (Class)pluginClass;
- (char)policyMayDownload;
- (Class)publisherPluginClass;
- (id)pushTokenForPersonID:(id)a0;
- (char)shouldEnableNewFeatures;
- (char)shouldLogAtLevel:(int)a0;
- (id)socketOptions;
- (id)stringForSysctlKey:(id)a0;
- (Class)subscriberPluginClass;
- (id)theDaemon;

@end
