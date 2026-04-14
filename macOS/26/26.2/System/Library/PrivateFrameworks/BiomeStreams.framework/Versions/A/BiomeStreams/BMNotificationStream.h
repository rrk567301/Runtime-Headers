@class BMStoreStream;

@interface BMNotificationStream : NSObject {
    BMStoreStream *_storeStream;
}

- (id)identifier;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)publisher;
- (void).cxx_destruct;
- (id)init;

@end
