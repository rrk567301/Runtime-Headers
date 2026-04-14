@class NSArray, NSExtensionContext, NSString, NSExtensionItem;

@interface RPBroadcastActivityExtensionNSViewController : NSServiceViewController <RPStreamingActivityDelegate>

@property (retain, nonatomic) NSArray *activities;
@property (readonly, retain) NSExtensionContext *extensionContext;
@property (retain, nonatomic) NSExtensionItem *applicationInfoExtensionItem;
@property (retain, nonatomic) NSString *localizedNoServiceMessage;
@property (retain, nonatomic) NSString *localizedBroadcastTitle;
@property (retain, nonatomic) NSString *localizedFindBroadcastApps;
@property (retain, nonatomic) NSString *hostBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)loadView;
- (void)viewDidLoad;
- (void)performActionWithStreamingActivity:(id)a0;
- (void)presentBroadcastActivitySheet;
- (void)setupSingleExtensionViewWithHostBundleID:(id)a0 preferredExtension:(id)a1 iconImage:(id)a2 appName:(id)a3 activities:(id)a4;
- (void)archiveHostData:(id)a0 hostBundleID:(id)a1 iconImage:(id)a2;
- (void)setupActivityViewController:(id)a0 hostBundleID:(id)a1 iconImage:(id)a2 activities:(id)a3;
- (void)showNotInstalledAlertWithAppName:(id)a0 broadcastActivitiesNotInstalledAlertTitle:(id)a1 broadcastActivitiesNotInstalledAlertMessage:(id)a2;
- (void)loadStreamingActivitiesWithHandler:(id /* block */)a0;
- (void)loadItems:(id)a0 withHandler:(id /* block */)a1;
- (void)loadHostApplicationInfo:(id /* block */)a0;
- (void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (id)broadcastExtensionContext;

@end
