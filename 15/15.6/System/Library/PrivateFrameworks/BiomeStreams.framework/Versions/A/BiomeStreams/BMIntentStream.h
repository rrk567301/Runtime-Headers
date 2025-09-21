@class NSString, BMStoreStream;

@interface BMIntentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(char)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(char)a3;
- (void)deleteIntentsWithGroupIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteIntentsWithIdentifiers:(id)a0 bundleID:(id)a1;

@end
