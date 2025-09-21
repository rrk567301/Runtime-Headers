@class NSURL;

@interface KGErrorMarker : NSObject {
    NSURL *_fileURL;
}

- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)createWithComment:(id)a0;
- (char)markerExists;
- (id)readComment;
- (void)removeMarker;

@end
