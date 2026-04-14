@class MLMultiArray, SNKShotLabel;

@interface SNKShotFeaturizationStreamResult : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, retain) MLMultiArray *data;
@property (nonatomic) long long datasetType;
@property (nonatomic, retain) SNKShotLabel *label;

- (void).cxx_destruct;
- (id)init;

@end
