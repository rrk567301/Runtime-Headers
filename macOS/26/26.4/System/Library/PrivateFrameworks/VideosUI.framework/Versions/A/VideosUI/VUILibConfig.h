@interface VUILibConfig : NSObject

@property (nonatomic) long long collectionItemLimit;
@property (nonatomic) double focusDebounceInterval;
@property (nonatomic) double focusVelocityThreshold;

- (id)init;

@end
