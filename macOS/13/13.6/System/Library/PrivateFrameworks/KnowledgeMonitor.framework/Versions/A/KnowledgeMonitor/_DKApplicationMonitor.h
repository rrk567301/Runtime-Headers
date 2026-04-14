@class NSString;

@interface _DKApplicationMonitor : _DKMonitor

@property (nonatomic) void *lsNotificationID;
@property (retain, nonatomic) NSString *lastIdentifierSet;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_defaultEvent;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1 shortVersionString:(id)a2 exactBundleVersion:(id)a3;
+ (id)debugCategory;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)registerForAppChangeNotifications;

@end
