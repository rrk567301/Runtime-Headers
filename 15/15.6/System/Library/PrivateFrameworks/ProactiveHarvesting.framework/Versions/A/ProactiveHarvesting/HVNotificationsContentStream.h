@class BMStream;

@interface HVNotificationsContentStream : BMContentStream {
    BMStream *_stream;
}

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)source;
- (char)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(char)a3;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
