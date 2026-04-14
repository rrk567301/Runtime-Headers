@class NSString, NSSet;

@interface PGEventLabelingConfiguration : NSObject {
    void /* function */ meaningLabels;
    void /* unknown type, empty encoding */ thresholdsByMeaningLabel;
}

@property (class, nonatomic, readonly) BOOL isEventLabelingEnabled;
@property (class, nonatomic, readonly) BOOL usePrimaryMeaningDomainForEventLabelingMeanings;
@property (class, nonatomic, readonly) NSString *bundlePath;

@property (nonatomic, readonly) long long modelVersion;
@property (nonatomic, readonly) NSSet *meaningLabels;

- (id)init;
- (void).cxx_destruct;
- (id)thresholdsBy:(id)a0;
- (BOOL)useEventLabelingToInferWithMeaningLabel:(id)a0;

@end
