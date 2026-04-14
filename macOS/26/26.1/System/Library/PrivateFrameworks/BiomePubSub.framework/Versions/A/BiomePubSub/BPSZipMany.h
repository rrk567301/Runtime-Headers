@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;
- (id)init;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
