@class NSArray;

@interface LCFCoreMLBatchProvider : NSObject <MLBatchProvider>

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *featureProviders;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)featuresAtIndex:(long long)a0;

@end
