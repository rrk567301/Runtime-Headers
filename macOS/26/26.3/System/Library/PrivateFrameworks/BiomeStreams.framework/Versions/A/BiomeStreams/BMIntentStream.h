@class NSString, BMStoreStream;

@interface BMIntentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (void)deleteIntentsWithGroupIdentifiers:(id)a0 bundleID:(id)a1;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisher;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (void)deleteIntentsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (id)source;
- (id)init;
- (void).cxx_destruct;

@end
