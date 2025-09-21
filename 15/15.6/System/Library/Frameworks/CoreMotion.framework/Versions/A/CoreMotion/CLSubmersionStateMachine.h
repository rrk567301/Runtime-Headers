@interface CLSubmersionStateMachine : NSObject {
    double _maxDepth;
}

@property (readonly, nonatomic) double deepThreshold;
@property (readonly, nonatomic) double nearDepthLimitThreshold;
@property (readonly, nonatomic) double pastMaxDepthThreshold;
@property (readonly, nonatomic) double sensorErrorThreshold;
@property (nonatomic) long long type;

- (id)initWithType:(long long)a0;
- (long long)getType;
- (long long)stateFromDepth:(id)a0 forceSubmersion:(char)a1;
- (void)initializeThresholds;

@end
