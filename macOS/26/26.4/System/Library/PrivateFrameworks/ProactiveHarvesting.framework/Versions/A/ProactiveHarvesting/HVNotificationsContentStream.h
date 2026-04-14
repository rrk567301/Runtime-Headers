@class BMStream;

@interface HVNotificationsContentStream : BMContentStream {
    BMStream *_stream;
}

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)init;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)identifier;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
