@interface SCUIAnalytics : NSObject

+ (void)waysToGetHelpTappedWithOptions:(long long)a0;
+ (void)contextMenuButtonTappedWithContentType:(long long)a0 subContentType:(long long)a1 direction:(long long)a2 options:(long long)a3 isBlurred:(BOOL)a4 identifier:(id)a5;
+ (void)obscuredViewRemovedWithIdentifier:(id)a0;
+ (void)obscuredViewShownWithContentType:(long long)a0 subcontentType:(long long)a1 identifier:(id)a2;
+ (void)deleteAnalyticsUIContextWithContextKey:(id)a0;
+ (id)getAnalyticsUIContextByIdentifierWithIdentifier:(id)a0;
+ (id)getAnalyticsUIContextWith:(id)a0;
+ (void)insertNewAnalyticsUIContextWithContextKey:(id)a0 analyticsContextWrapper:(id)a1;
+ (void)insertNewOptionsToContextMenuWith:(id)a0 value:(id)a1;
+ (void)waysToGetHelpTappedWithContentType:(long long)a0 isBlurred:(BOOL)a1;

- (id)init;

@end
