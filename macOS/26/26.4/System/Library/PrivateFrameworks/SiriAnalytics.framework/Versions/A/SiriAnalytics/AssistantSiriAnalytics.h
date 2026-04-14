@class SiriAnalyticsRemoteService;

@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
    SiriAnalyticsRemoteService *_remoteService;
}

+ (id)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1;
+ (id)sharedAnalytics;
+ (void)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (id)derivedIdentifierForComponentName:(int)a0 fromSourceIdentifier:(id)a1;
+ (id)sharedStream;

- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;

@end
