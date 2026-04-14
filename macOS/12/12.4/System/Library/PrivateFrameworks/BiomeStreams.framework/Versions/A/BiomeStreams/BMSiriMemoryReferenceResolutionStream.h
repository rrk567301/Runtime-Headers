@class NSString, BMRestrictedStream;

@interface BMSiriMemoryReferenceResolutionStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMRestrictedStream *_stream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;

@end
