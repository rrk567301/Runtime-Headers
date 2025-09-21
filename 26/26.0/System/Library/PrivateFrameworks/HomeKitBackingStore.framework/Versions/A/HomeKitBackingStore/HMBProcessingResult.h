@class HMBProcessingOptions, NAFuture;

@interface HMBProcessingResult : HMFObject

@property (readonly, nonatomic) HMBProcessingOptions *options;
@property (readonly, nonatomic) NAFuture *mirrorOutputResult;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 mirrorOutputResult:(id)a1;

@end
