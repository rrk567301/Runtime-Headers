@class NSString, BMRestrictedStream;

@interface BMSiriPrivateLearningSELFEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting> {
    BMRestrictedStream *_stream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisher;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherFromStartTime:(double)a0;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)deleteEventsWithPredicate:(id /* block */)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;

@end
