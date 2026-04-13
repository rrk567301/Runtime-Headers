@class NSArray;

@interface BPSZipMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;

@end
