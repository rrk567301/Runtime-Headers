@class NSString, BMStoreStream;

@interface BMIntentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherFromStartTime:(double)a0;
- (id)publisher;
- (id)init;
- (void)deleteIntentsWithGroupIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteIntentsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void).cxx_destruct;
- (id)source;

@end
