@class NSNumber, NSString;

@interface CSCPUTimeRestriction : NSObject <CSRestriction>

@property (readonly, nonatomic) NSNumber *cpuThreshold;
@property (readonly, nonatomic) NSNumber *timeWindow;
@property (readonly, nonatomic) BOOL fatalMitigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getProperties;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)applyToProcess:(id)a0;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1 andFatal:(BOOL)a2;
- (int)leniencyScore;
- (int)releaseForProcess:(id)a0;
- (BOOL)shouldBeFatalOnViolation;

@end
