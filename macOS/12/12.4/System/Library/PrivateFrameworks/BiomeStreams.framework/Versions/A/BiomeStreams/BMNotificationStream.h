@class BMStoreStream;

@interface BMNotificationStream : NSObject {
    BMStoreStream *_storeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)source;
- (id)publisherFromStartTime:(double)a0;

@end
