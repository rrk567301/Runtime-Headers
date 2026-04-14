@class NSTimer, NSMutableDictionary;

@interface CIMMecabraController : NSObject

@property (retain, nonatomic) NSMutableDictionary *mecabraRefDictionary;
@property (retain, nonatomic) NSMutableDictionary *applicationContextDictionary;
@property (retain, nonatomic) NSTimer *maintenanceTimer;
@property (nonatomic) BOOL logStateSet;
@property (retain, nonatomic) id mobileAssetListener;

+ (id)sharedInstance;
+ (id)TIInputModeIdentifierFrom:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flushDynamicData;
- (void)updateDictionaryPaths;
- (void)setApplicationContext:(id)a0 inputMethodType:(int)a1;
- (struct __Mecabra { } *)mecabraEngineForInputMethodType:(int)a0;
- (void)setMecabraEngine:(struct __Mecabra { } *)a0 forInputMethodType:(int)a1;
- (id)applicationContextForInputMethodType:(int)a0;
- (void)updateDictionaryPathsFor:(int)a0;
- (void)restartMaintenanceTimer;
- (void)performMaintenanceImmediately;
- (void)performMaintenanceOnMainThread;

@end
