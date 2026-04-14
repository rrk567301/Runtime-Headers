@class NSString, BMStoreStream;

@interface ATXBiomeLightweightClientModelCacheUpdateStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)initWithStoreConfig:(id)a0;
- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1;
- (id)init;

@end
