@class NSString, BMStoreStream;

@interface ATXBiomePredictionContextStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (void)enumerateNearestContextForEvents:(id)a0 tolerance:(double)a1 block:(id /* block */)a2;
- (BOOL)_shouldMatchContext:(id)a0 queryEvent:(id)a1 tolerance:(double)a2;
- (id)source;
- (id)_publisherWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
