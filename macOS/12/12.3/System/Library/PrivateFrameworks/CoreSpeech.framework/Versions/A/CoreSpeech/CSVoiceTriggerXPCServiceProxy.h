@class CSSiriAssertionMonitor, NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)fetchVoiceTriggerStats;
- (id)initWithAssertionMonitor:(id)a0;
- (id)_fetchAssertionMonitor;
- (void)notifyServiceConnectionLost;

@end
