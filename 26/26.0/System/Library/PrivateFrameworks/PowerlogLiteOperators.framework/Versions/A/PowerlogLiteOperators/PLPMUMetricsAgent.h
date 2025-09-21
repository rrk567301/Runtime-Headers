@class PLTimer, NSDate;

@interface PLPMUMetricsAgent : PLAgent

@property (retain) PLTimer *railEnergyTimer;
@property unsigned int railEnergyPMUConn;
@property (retain) NSDate *lastEntryDate;

+ (void)load;
+ (BOOL)isEnabled;
+ (id)buckNames;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (void)connectToRailEnergyService;
- (id)getBuckNameFromProperty:(unsigned int)a0;
- (unsigned long long)getEnergy:(char *)a0 withIndex:(unsigned int)a1;
- (unsigned long long)getTimestamp:(char *)a0 withIndex:(unsigned int)a1;
- (void)parseAndLogRailEnergyMetrics:(unsigned int)a0 withEntryDate:(id)a1;
- (void)triggerRailEnergyLogging;

@end
