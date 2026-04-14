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

+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)useNativePersistenceStack;
+ (id)currentEnvironment;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1;
+ (id)inMemoryURL;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;

- (void)makeCurrentEnvironment;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1 posterDataStore:(id)a2;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)posterDataStoreSpy;
- (void).cxx_destruct;
- (BOOL)isUITestEnvironment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)retrieveEnvironmentConfigurationFromRemoteProcess;
- (id)copyWithDelegateInfos:(id)a0;
- (id)init;

@end
