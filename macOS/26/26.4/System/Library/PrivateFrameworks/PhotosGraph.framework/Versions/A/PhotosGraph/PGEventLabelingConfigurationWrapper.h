@class PGEventLabelingConfiguration;

@interface PGEventLabelingConfigurationWrapper : NSObject {
    PGEventLabelingConfiguration *_configuration;
}

+ (BOOL)isEventLabelingEnabled;
+ (BOOL)usePrimaryMeaningDomainForEventLabelingMeanings;

- (void).cxx_destruct;
- (id)init;
- (double)highPrecisionThresholdForMeaningLabel:(id)a0;
- (double)highRecallThresholdForMeaningLabel:(id)a0;
- (id)meaningLabelsForEventLabeling;

@end
