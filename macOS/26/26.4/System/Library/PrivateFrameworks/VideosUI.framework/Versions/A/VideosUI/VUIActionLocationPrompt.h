@class NSString, NSDictionary, NSResponder, NSURL;

@interface VUIActionLocationPrompt : VUIAction

@property (weak, nonatomic) NSResponder *targetResponder;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL geoLocationEnforced;
@property (nonatomic) BOOL forcesSystemPrompt;
@property (nonatomic) BOOL shouldAwaitLatLong;
@property (retain, nonatomic) NSDictionary *dialogMetrics;
@property (retain, nonatomic) NSString *settingsPromptTitle;
@property (retain, nonatomic) NSString *settingsPromptMessage;
@property (retain, nonatomic) NSString *settingsPromptButtonTitle;
@property (retain, nonatomic) NSString *settingsPromptCancelTitle;
@property (retain, nonatomic) NSURL *settingsURL;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (BOOL)_isLocationServicesAuthorizedWithNotification:(id)a0;
- (void)_locationAuthorizationStatusDidChange:(id)a0;
- (void)_locationDidChange:(id)a0;
- (void)_performLocationChecksWithTargetResponder:(id)a0 shouldPromptLocationAlert:(BOOL)a1 shouldRequestUserLocation:(BOOL)a2 isLocationAuthorized:(BOOL)a3 authorizationStatusDidChangeNotificationName:(id)a4 locationDidChangeNotificationName:(id)a5 completionHandler:(id /* block */)a6;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentCarplayLocationAlertWithCompletionHandler:(id /* block */)a0;

@end
