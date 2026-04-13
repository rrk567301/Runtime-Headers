@class NSArray, NSString, NSDate, NSObject;
@protocol OS_os_log;

@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSArray *timelineControllers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)_activityDelay;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)_restoreFromUserDefaults;
- (void)_runActivity;
- (void)_refreshTimelines;
- (void)_updateLastUpdateInformation;
- (void)_writeUserDefaults;
- (void)_scheduleActivity;
- (id)initWithWidgetBundleIdentifier:(id)a0 widgetKindIdentifiers:(id)a1 hookRegistry:(id)a2;

@end
