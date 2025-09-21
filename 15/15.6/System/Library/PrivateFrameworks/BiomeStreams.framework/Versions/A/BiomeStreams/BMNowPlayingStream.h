@class NSString, BMStoreStream;

@interface BMNowPlayingStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
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
- (id)remoteDevices;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(char)a2 pipeline:(id /* block */)a3;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(char)a5 includeLocal:(char)a6 pipeline:(id /* block */)a7;

@end
