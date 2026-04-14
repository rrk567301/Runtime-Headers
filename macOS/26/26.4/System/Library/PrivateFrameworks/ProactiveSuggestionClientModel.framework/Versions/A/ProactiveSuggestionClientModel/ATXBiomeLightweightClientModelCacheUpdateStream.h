@class NSString, BMStoreStream;

@interface ATXBiomeLightweightClientModelCacheUpdateStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1;

@end
