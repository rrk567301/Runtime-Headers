@class NSString, BMStoreStream, BMContentSource;

@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
    BMContentSource *_contentSource;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherFromStartTime:(double)a0;
- (id)publisher;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)init;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)source;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
