@class NSString, BMStoreStream;

@interface ATXFaceGalleryBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;
- (void)deleteAllEvents;

@end
