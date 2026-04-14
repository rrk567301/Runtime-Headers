@class NSString, BMStoreStream;

@interface ATXSpotlightUIBiomeStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end
