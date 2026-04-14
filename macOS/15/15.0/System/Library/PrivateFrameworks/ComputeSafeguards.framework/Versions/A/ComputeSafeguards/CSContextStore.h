@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CSContextStore : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain, nonatomic) NSMutableDictionary *currentContext;

+ (id)sharedInstance;

- (id)description;
- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)a0 forContextIdentifier:(id)a1;
- (id)getStateForIdentifier:(id)a0;
- (BOOL)satisfiesCriteriaForScenario:(id)a0;
- (void)updateState:(id)a0 forIdentifier:(id)a1;

@end
