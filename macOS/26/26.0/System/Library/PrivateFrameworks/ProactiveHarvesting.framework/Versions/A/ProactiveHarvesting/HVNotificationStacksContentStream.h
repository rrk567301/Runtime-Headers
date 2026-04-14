@class BMStream;

@interface HVNotificationStacksContentStream : BMContentStream {
    BMStream *_stream;
}

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)identifier;
- (id)publisher;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)init;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)source;
- (id)initWithStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1;

@end
