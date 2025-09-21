@class NSString, NSSet;

@interface PGEventLabelingConfiguration : NSObject {
    void /* unknown type, empty encoding */ meaningLabels;
    void /* unknown type, empty encoding */ thresholdsByMeaningLabel;
}

@property (class, nonatomic, readonly) char isEventLabelingEnabled;
@property (class, nonatomic, readonly) char usePrimaryMeaningDomainForEventLabelingMeanings;
@property (class, nonatomic, readonly) NSString *bundlePath;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ modelVersion;
@property (nonatomic, readonly) NSSet *meaningLabels;

- (id)init;
- (void).cxx_destruct;
- (id)thresholdsBy:(id)a0;
- (char)useEventLabelingToInferWithMeaningLabel:(id)a0;

@end
