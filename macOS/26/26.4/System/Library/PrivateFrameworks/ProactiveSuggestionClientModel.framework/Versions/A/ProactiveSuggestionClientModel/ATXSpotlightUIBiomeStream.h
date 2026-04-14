@class NSString, BMStoreStream;

@interface ATXSpotlightUIBiomeStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;

@end
