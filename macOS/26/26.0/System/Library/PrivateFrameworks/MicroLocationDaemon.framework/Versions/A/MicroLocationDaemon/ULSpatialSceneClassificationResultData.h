@class NSArray;

@interface ULSpatialSceneClassificationResultData : NSObject

@property (nonatomic) long long indoorOutdoorLabel;
@property (retain, nonatomic) NSArray *indoorOutdoorProbabilities;
@property (retain, nonatomic) NSArray *spatialSceneClassifications;
@property (nonatomic) long long weightedMajorityVoteClassification;

- (id)description;
- (void).cxx_destruct;
- (long long)_calculateWeightedMajorityVoteClassification;
- (id)initWithIndoorOutdoorLabel:(long long)a0 indoorOutdoorLabelProbabilities:(id)a1 spatialSceneClassifications:(id)a2;

@end
