@class NSString, BMStoreStream;

@interface BMDKEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting> {
    BMStoreStream *_storeStream;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)streamNameFromDKStreamName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)initWithDKStreamIdentifier:(id)a0 contentProtection:(id)a1;
- (char)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(char)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(char)a3;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)deleteEventsWithPredicate:(id /* block */)a0;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (id)initWithDKStreamIdentifier:(id)a0;
- (id)initWithStreamIdentifier:(id)a0 contentProtection:(unsigned long long)a1 pruningPolicy:(id)a2 domain:(unsigned long long)a3;

@end
