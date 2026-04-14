@class NSString;

@interface NeuralNetworkConfig : NSObject {
    void /* function */ modelPath;
}

@property (nonatomic, copy) NSString *modelPath;
@property (nonatomic) float logThreshold;
@property (nonatomic) float logMinimum;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
