@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)upstreamPublishers;
- (id)initWithPublishers:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
