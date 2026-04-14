@class NSArray, NSSet, NSString, NSDate, CHSWidgetConfigurationReader, NSObject;
@protocol OS_os_log;

@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSArray *timelineControllers;
@property (retain, nonatomic) CHSWidgetConfigurationReader *reader;
@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLastUpdateInformation;
- (void)_runActivity;
- (long long)_activityDelay;
- (void)_refreshTimelinesWithReason:(id)a0;
- (void)_writeUserDefaults;
- (void).cxx_destruct;
- (id)initWithWidgetBundleIdentifier:(id)a0 widgetKindIdentifiers:(id)a1 hookRegistry:(id)a2;
- (void)_hasUserConfiguredMailWidget:(id /* block */)a0;
- (void)_scheduleActivityWithReason:(id)a0;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)dealloc;
- (void)_restoreFromUserDefaults;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;

@end
