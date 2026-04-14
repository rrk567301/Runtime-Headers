@class ENExposureSummaryItem, NSDate;

@interface ENExposureDaySummary : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) ENExposureSummaryItem *confirmedTestSummary;
@property (retain, nonatomic) ENExposureSummaryItem *confirmedClinicalDiagnosisSummary;
@property (retain, nonatomic) ENExposureSummaryItem *recursiveSummary;
@property (retain, nonatomic) ENExposureSummaryItem *selfReportedSummary;
@property (retain, nonatomic) ENExposureSummaryItem *daySummary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void)roundDurations;

@end
