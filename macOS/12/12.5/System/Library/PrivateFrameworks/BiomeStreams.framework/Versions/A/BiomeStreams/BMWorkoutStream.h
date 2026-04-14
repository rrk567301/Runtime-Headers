@class NSString, BMStoreStream;

@interface BMWorkoutStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisherFromStartTime:(double)a0;

@end
