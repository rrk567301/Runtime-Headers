@interface LimitAllocation : NSObject {
    void /* unknown type, empty encoding */ allocationStrategy;
    void /* unknown type, empty encoding */ proportionTransformationFunction;
}

@property (nonatomic, readonly) double proportionTransformationAlpha;

- (void).cxx_destruct;

@end
