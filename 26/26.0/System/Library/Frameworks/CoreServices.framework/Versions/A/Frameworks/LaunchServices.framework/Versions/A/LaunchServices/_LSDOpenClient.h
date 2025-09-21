@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>

- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)getURLOverrideForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)failedToOpenApplication:(id)a0 withURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)getiCloudHostNamesWithCompletionHandler:(id /* block */)a0;
- (BOOL)serviceSelectorRequiresDatabaseContext:(SEL)a0;
- (void)invokeServiceInvocation:(id)a0 isReply:(BOOL)a1;
- (void)updateRestrictionKnowledgeWithCompletionHandler:(id /* block */)a0;
- (void)openUserActivityWithUniqueIdentifier:(id)a0 activityData:(id)a1 activityType:(id)a2 bundleIdentifier:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;

@end
