@class NSString, BMStoreStream;

@interface PIFeatureFeedbackStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSString *identifier;

+ (id)rootPath;
+ (id)clientIdentifierForClientPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithClientIdentifier:(id)a0;

@end
