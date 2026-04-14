@class CSRestrictionManager, CSContextStore, CSRestrictionDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface CSDaemon : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mainQueue;
@property (retain, nonatomic) CSRestrictionDataProvider *restrictionDataProvider;
@property (retain, nonatomic) CSRestrictionManager *restrictionsManager;
@property (retain, nonatomic) CSContextStore *contextStore;
@property int powerStatusNotifyToken;
@property int displayStatusNotifyToken;

+ (id)run;
+ (id)_sharedInstance;

- (id)_init;
- (void)_start;
- (void).cxx_destruct;
- (BOOL)_shouldRunSafeguards;
- (void)handleDisplayStateChanged:(unsigned long long)a0;
- (void)handlePowerStateChanged;
- (void)updateContextForIdentifier:(id)a0 withState:(id)a1;
- (void)updateContextForIdentifier:(id)a0 withState:(id)a1 withRestrictions:(id)a2;

@end
