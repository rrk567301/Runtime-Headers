@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (BOOL)completed;
- (id)upstreamPublishers;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
