@class NSUUID, NSImage, PHPerson;

@interface PXPersonItem : NSObject

@property int faceImageRequestID;
@property (copy, nonatomic) NSUUID *cellUUID;
@property (copy) id /* block */ faceImageLoadingCompletionBlock;
@property (copy) id /* block */ resultHandler;
@property (weak) NSImage *faceImage;
@property (retain, nonatomic) PHPerson *modelObject;

- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)initWithPerson:(id)a0;

@end
