@class LBFBiomeManager;

@interface LBFEventManager : NSObject

@property (retain, nonatomic) LBFBiomeManager *biomeManagerLighthouse;
@property (retain, nonatomic) LBFBiomeManager *biomeManagerTrial;
@property (retain, nonatomic) LBFBiomeManager *biomeManagerMLRuntimed;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addMLRuntimedEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;
- (BOOL)addTrialdEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;
- (id)ensureBiomeManagerLighthouse;
- (id)ensureBiomeManagerTrial;
- (id)ensureBiomeManagerMLRuntimed;
- (BOOL)addLighthousePluginEvent:(id)a0;
- (BOOL)addLighthousePluginEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;

@end
