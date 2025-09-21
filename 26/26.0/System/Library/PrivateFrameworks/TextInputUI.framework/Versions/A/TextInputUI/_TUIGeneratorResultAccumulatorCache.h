@class NSMutableDictionary, NSMutableArray;

@interface _TUIGeneratorResultAccumulatorCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestCache;
@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (nonatomic) unsigned long long maxSize;

- (unsigned long long)count;
- (void)emptyCache;
- (id)initWithSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)accumulatorForToken:(id)a0 type:(int)a1;
- (void)addToCache:(id)a0 type:(int)a1;

@end
