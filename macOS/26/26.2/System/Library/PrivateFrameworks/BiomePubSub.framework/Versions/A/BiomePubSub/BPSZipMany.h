@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (BOOL)completed;
- (id)initWithPublishers:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (void)reset;
- (void).cxx_destruct;
- (id)upstreamPublishers;
- (id)init;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
