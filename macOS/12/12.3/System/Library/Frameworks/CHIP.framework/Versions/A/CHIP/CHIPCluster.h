@class NSObject;
@protocol OS_dispatch_queue;

@interface CHIPCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (void *)getCluster;
- (struct Span<const char> { char *x0; unsigned long long x1; })asCharSpan:(id)a0;
- (struct Span<const unsigned char> { char *x0; unsigned long long x1; })asByteSpan:(id)a0;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;

@end
