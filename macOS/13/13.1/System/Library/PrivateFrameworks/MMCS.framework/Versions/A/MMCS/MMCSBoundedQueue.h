@class NSMutableArray;

@interface MMCSBoundedQueue : NSObject

@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) struct dispatch_semaphore_s { } *boundsExceeded;
@property (readonly, nonatomic) unsigned long long bytesUpperBound;
@property (nonatomic) unsigned long long bytesErrorLevel;
@property (readonly, nonatomic) BOOL isValid;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (id)initWithUpperBound:(unsigned long long)a0;
- (unsigned long long)_sync_aggregateByteCount;
- (BOOL)_sync_isFull;
- (void)removeNextDataWithBlock:(id /* block */)a0;

@end
