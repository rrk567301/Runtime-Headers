@class IMMessagesBlastDoorInterface;
@protocol BCSBlastDoorImageCache;

@interface BCSBlastDoorHelper : NSObject {
    IMMessagesBlastDoorInterface *_blastdoor;
}

@property (class, readonly) BCSBlastDoorHelper *defaultHelper;

@property (retain, nonatomic) id<BCSBlastDoorImageCache> store;

- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (void)warmUpBlastDoor;
- (id)safeImageURLFromImageURL:(id)a0 error:(id *)a1;
- (id)safeImageURLFromImage:(id)a0 imageFormat:(id)a1 error:(id *)a2;
- (id)safeImageURLFromImage:(id)a0 imageFormat:(id)a1 maxPixelDimension:(float)a2 scale:(float)a3 error:(id *)a4;
- (id)safeImageURLFromImageURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 error:(id *)a3;

@end
