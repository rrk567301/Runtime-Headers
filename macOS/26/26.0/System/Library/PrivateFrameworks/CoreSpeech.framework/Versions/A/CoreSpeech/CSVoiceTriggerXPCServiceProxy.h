@class CSSiriAssertionMonitor, NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor;

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (id)initWithAssertionMonitor:(id)a0;
- (void)registerObserver:(id)a0;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (id)_fetchAssertionMonitor;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (id)init;
- (void)notifyServiceConnectionLost;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void).cxx_destruct;
- (id)fetchVoiceTriggerStats;

@end
