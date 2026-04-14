@class WBSDiagnosticStateCollector, NSString, NSDictionary, WBSTrialIdentifiers, TRIClient, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSTrialManager : NSObject {
    NSMutableDictionary *_customFactorsDictionary;
    WBSDiagnosticStateCollector *_stateCollector;
}

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSDictionary *factors;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL ready;
@property (readonly, nonatomic) WBSTrialIdentifiers *identifiers;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isReady;
- (BOOL)isCFEnabled;
- (BOOL)runCFFlow;
- (BOOL)inExperiment;
- (void)fetchFactorsInNamespace:(id)a0;
- (id)factorWithName:(id)a0;
- (void)setFactorWithName:(id)a0 value:(id)a1;
- (id)numberFactorWithName:(id)a0;
- (id)stringFactorWithName:(id)a0;
- (id)getRetrievalFactorName:(id)a0 forCF:(BOOL)a1;
- (BOOL)getBoolFactor:(id)a0 forCF:(BOOL)a1 forDefault:(BOOL)a2;
- (long long)getIntFactor:(id)a0 forCF:(BOOL)a1 forDefault:(long long)a2;
- (double)getFloatFactor:(id)a0 forCF:(BOOL)a1 forDefault:(double)a2;
- (id)prepareLogDictionary:(BOOL)a0 withExperimentId:(id)a1 withTreatmentId:(id)a2 isCounterFactualSearch:(BOOL)a3 withFactorData:(id)a4;
- (id)getFactorValueAsString:(id)a0;
- (void)registerDiagnosticInfo:(id)a0;

@end
