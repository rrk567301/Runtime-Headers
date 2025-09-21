@class NSString, BMStoreStream;

@interface ATXSpotlightUIBiomeStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)initWithStoreConfig:(id)a0;
- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)source;

@end
