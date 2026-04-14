@class NSBundle, IAProvider, IAAccount, NSString;

@interface IAPlugin : NSObject

@property (retain) NSBundle *bundle;
@property (retain) IAAccount *account;
@property (retain) IAProvider *provider;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (long long)authType;
- (BOOL)isSocial;
- (id)imageForAccount:(id)a0;
- (void)pluginDidLoad;
- (void)willSelectAccount:(id)a0;
- (id)userVisibleProviderName;
- (id)specialPluginBehaviors;
- (Class)authenticatorClass;

@end
