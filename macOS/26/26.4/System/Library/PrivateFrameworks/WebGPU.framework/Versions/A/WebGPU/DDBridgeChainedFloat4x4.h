@interface DDBridgeChainedFloat4x4 : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic, retain) DDBridgeChainedFloat4x4 *next;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
