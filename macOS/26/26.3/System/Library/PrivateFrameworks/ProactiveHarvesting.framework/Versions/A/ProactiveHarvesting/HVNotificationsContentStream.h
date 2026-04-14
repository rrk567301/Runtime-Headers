@class BMStream;

@interface HVNotificationsContentStream : BMContentStream {
    BMStream *_stream;
}

- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)identifier;
- (id)publisher;
- (id)source;
- (id)init;
- (void).cxx_destruct;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
