@class NSObject;
@protocol OS_dispatch_queue;

@interface MTRCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) unsigned short endpoint;

- (void).cxx_destruct;
- (struct Span<const unsigned char> { char *x0; unsigned long long x1; })asByteSpan:(id)a0;
- (struct Span<const char> { char *x0; unsigned long long x1; })asCharSpan:(id)a0;
- (id)initWithEndpointID:(id)a0 queue:(id)a1;

@end
