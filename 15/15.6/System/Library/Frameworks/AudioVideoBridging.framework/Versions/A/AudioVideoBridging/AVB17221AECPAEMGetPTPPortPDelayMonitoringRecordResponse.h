@interface AVB17221AECPAEMGetPTPPortPDelayMonitoringRecordResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short recordIndex;
@property (nonatomic) char measurementValid;
@property (nonatomic) char completePeriod;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long averageMeanLinkDelay;
@property (nonatomic) unsigned long long minimumMeanLinkDelay;
@property (nonatomic) unsigned long long maximumMeanLinkDelay;
@property (nonatomic) unsigned long long standardDeviationMeanLinkDelay;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingAverageMeanLinkDelay;
+ (id)keyPathsForValuesAffectingCompletePeriod;
+ (id)keyPathsForValuesAffectingMaximumMeanLinkDelay;
+ (id)keyPathsForValuesAffectingMeasurementValid;
+ (id)keyPathsForValuesAffectingMinimumMeanLinkDelay;
+ (id)keyPathsForValuesAffectingRecordIndex;
+ (id)keyPathsForValuesAffectingStandardDeviationMeanLinkDelay;
+ (id)keyPathsForValuesAffectingTimestamp;

- (id)init;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setRecordIndex:(unsigned short)a0;
- (unsigned long long)averageMeanLinkDelay;
- (char)completePeriod;
- (unsigned long long)maximumMeanLinkDelay;
- (char)measurementValid;
- (unsigned long long)minimumMeanLinkDelay;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)recordIndex;
- (void)setAverageMeanLinkDelay:(unsigned long long)a0;
- (void)setCompletePeriod:(char)a0;
- (void)setMaximumMeanLinkDelay:(unsigned long long)a0;
- (void)setMeasurementValid:(char)a0;
- (void)setMinimumMeanLinkDelay:(unsigned long long)a0;
- (void)setStandardDeviationMeanLinkDelay:(unsigned long long)a0;
- (unsigned long long)standardDeviationMeanLinkDelay;

@end
