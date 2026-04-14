@class NSString, BMStoreStream;

@interface ATXBiomePredictionContextStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateNearestContextForEvents:(id)a0 tolerance:(double)a1 block:(id /* block */)a2;
- (id)initWithStoreConfig:(id)a0;
- (id)_publisherWithOptions:(id)a0;
- (BOOL)_shouldMatchContext:(id)a0 queryEvent:(id)a1 tolerance:(double)a2;

@end
