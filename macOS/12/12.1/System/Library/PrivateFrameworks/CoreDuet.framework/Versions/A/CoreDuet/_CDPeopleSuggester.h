@class _CDCachedPeopleSuggestion, _CDPeopleSuggesterContext, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterSettings, NSObject;
@protocol _CDInteractionAdvising, OS_dispatch_queue;

@interface _CDPeopleSuggester : NSObject {
    id<_CDInteractionAdvising> _advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    int _settingsNotifyToken;
}

@property BOOL enableCaching;
@property double cacheTimeoutSeconds;
@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) _CDPeopleSuggesterSettings *settings;

+ (id)peopleSuggesterUsingDaemon;
+ (id)createAdvisorSettingsFromContext:(id)a0 settings:(id)a1;
+ (id)restrictedPrefixForPrefix:(id)a0;
+ (id)peopleSuggester;
+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)loggingTagForAutocompleteFeedback;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (id)initWithAdvisor:(id)a0;
- (void)updateSettings;
- (id)suggestPeopleWithError:(id *)a0;
- (void)suggestPeopleWithCompletionHandler:(id /* block */)a0;

@end
