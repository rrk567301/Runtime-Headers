@class NSArray, NSURL, CNCDPersistenceStack;
@protocol CNContactsLoggerProvider, CNAccountCollection, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol, CNContactPosterDataStore, CNSchedulerProvider;

@interface CNContactsEnvironment : NSObject <NSCopying> {
    id<CNContactPosterDataStore> _posterDataStore;
}

@property (retain, nonatomic) NSArray *delegateInfos;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNContactsLoggerProvider> loggerProvider;
@property (retain) id<CNAccountCollection> accountCollection;
@property (retain) CNCDPersistenceStack *existingPersistenceStack;
@property (nonatomic, setter=setUseNativeStack:) BOOL shouldUseNativeStack;
@property (readonly, copy) NSURL *baseURL;
@property (retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;
@property (retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
@property (retain) id<CNContactPosterDataStore> posterDataStore;
@property (readonly) BOOL useInMemoryStores;

+ (BOOL)supportsSecureCoding;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1;
+ (BOOL)useNativePersistenceStack;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)currentEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
+ (id)inMemoryURL;
+ (id)unitTestingEnvironment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)posterDataStoreSpy;
- (BOOL)isUITestEnvironment;
- (id)copyWithDelegateInfos:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)retrieveEnvironmentConfigurationFromRemoteProcess;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
- (void)makeCurrentEnvironment;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1 posterDataStore:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
