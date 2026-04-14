@class NSArray;

@interface BPSZipMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;
- (void)subscribe:(id)a0;

@end
