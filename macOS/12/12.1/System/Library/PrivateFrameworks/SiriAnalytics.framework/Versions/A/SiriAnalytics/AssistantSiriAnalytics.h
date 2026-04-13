@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
}

+ (id)sharedAnalytics;
+ (id)sharedStream;
+ (id)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1;
+ (void)derivedIdentifierForComponent:(int)a0 fromSourceIdentifier:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (BOOL)clientMessageStream:(id)a0 shouldEmitMessage:(id)a1 timestamp:(unsigned long long)a2 isolatedStreamUUID:(id)a3;

@end
