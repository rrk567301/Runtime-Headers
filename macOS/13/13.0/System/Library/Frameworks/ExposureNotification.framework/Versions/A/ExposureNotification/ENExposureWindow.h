@class NSArray, NSDate;

@interface ENExposureWindow : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char calibrationConfidence;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic) unsigned int infectiousness;
@property (copy, nonatomic) NSArray *scanInstances;
@property (nonatomic) unsigned int variantOfConcernType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;

@end
