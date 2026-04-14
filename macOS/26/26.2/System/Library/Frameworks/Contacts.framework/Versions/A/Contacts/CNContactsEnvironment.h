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
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
+ (id)unitTestingEnvironment;
+ (id)currentEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)inMemoryURL;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (BOOL)useNativePersistenceStack;

- (id)copyWithDelegateInfos:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)makeCurrentEnvironment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
- (id)posterDataStoreSpy;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1 posterDataStore:(id)a2;
- (void)retrieveEnvironmentConfigurationFromRemoteProcess;
- (id)init;
- (BOOL)isUITestEnvironment;

@end
