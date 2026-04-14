@class SiriAnalyticsRemoteService;

@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
    SiriAnalyticsRemoteService *_remoteService;
}

+ (void)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (id)derivedIdentifierForComponentName:(int)a0 fromSourceIdentifier:(id)a1;
+ (id)sharedStream;
+ (id)sharedAnalytics;
+ (id)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1;

- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
