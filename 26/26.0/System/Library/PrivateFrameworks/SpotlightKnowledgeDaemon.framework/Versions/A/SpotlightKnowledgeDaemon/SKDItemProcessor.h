@class NSArray;
@protocol SKDEventLogger;

@interface SKDItemProcessor : NSObject {
    NSArray *_pipelines;
    NSArray *_fetchAttributes;
    id<SKDEventLogger> _logger;
}

@property (readonly, nonatomic) id<SKDEventLogger> logger;
@property (readonly, nonatomic) NSArray *pipelines;

- (id)fetchAttributes;
- (void)setLogger:(id)a0;
- (void)setFetchAttributes:(id)a0;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)processItemWithRecord:(id)a0 filePath:(id)a1;
- (void)completeItemUpdate:(id)a0 pipeline:(id)a1;
- (id)initWithPipelines:(id)a0;
- (void)processItemUpdate:(id)a0 record:(id)a1 bundleID:(id)a2;
- (id)processItemWithRecord:(id)a0 uniqueID:(id)a1 bundleID:(id)a2;

@end
