@class BMStream;

@interface HVNotificationsContentStream : BMContentStream {
    BMStream *_stream;
}

- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisher;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)identifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
