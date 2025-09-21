@class NSArray, NSUUID, HKQuantitySample;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
    NSUUID *_legacySeriesIdentifier;
    char _didAwakeFromJournal;
}

@property (readonly, copy, nonatomic) HKQuantitySample *series;
@property (readonly, copy, nonatomic) NSArray *values;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeries:(id)a0 values:(id)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
