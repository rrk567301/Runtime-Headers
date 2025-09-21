@class INCExtensionConnection;

@interface INCAppProxy : NSObject

@property (readonly, weak, nonatomic) INCExtensionConnection *_connection;

+ (void)initialize;
+ (char)shouldLaunchAppInBackgroundWithIntent:(id)a0 intentResponse:(id)a1;

- (void).cxx_destruct;
- (id)_initWithConnection:(id)a0;
- (void)launchAppInBackground:(char)a0 restrictAppsToCarPlay:(char)a1 userActivityIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)launchAppInBackground:(char)a0 restrictAppsToCarPlay:(char)a1 userActivityIdentifier:(id)a2 retainsSiri:(char)a3 completionHandler:(id /* block */)a4;
- (void)launchAppInBackground:(char)a0 completionHandler:(id /* block */)a1;

@end
