@class NSNumber, NSString;

@interface CSCPUTimeRestriction : NSObject <CSRestriction>

@property (readonly, nonatomic) NSNumber *cpuThreshold;
@property (readonly, nonatomic) NSNumber *timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToProcess:(id)a0;
- (BOOL)_shouldBeFatalOnViolation;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1;
- (BOOL)releaseForProcess:(id)a0;

@end
