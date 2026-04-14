@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (void)setInitialContentDownloadsEnabled:(BOOL)a0;
+ (BOOL)initialContentDownloadsEnabled;
+ (void)installApp:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)installApps:(id)a0 withCompletionHandler:(id /* block */)a1;


@end
