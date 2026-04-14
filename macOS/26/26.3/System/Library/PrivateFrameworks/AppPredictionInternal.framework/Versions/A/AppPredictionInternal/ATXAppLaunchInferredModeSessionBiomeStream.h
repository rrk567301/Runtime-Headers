@class NSString, BMStoreStream;

@interface ATXAppLaunchInferredModeSessionBiomeStream : NSObject <BMStream, BMSourceStream> {
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
