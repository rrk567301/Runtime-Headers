@class NSDictionary, NSMutableDictionary, APOdmlSettings;

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) APOdmlSettings *runtimeOdmlSettings;
@property (retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings;
@property (retain, nonatomic) NSDictionary *deviceFeatures;
@property (retain, nonatomic) NSMutableDictionary *adRecords;

- (void).cxx_destruct;

@end
