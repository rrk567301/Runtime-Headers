@class NSString;

@interface _DKApplicationMonitor : _DKMonitor

@property (nonatomic) void *lsNotificationID;
@property (retain, nonatomic) NSString *lastIdentifierSet;

+ (id)entitlements;
+ (id)eventStream;
+ (id /* block */)_eventFilterBlock;
+ (id)_defaultEvent;
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;
+ (id)debugCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;
- (void)registerForAppChangeNotifications;
- (void)platformSpecificStart;
- (void)platformSpecificStop;

@end
