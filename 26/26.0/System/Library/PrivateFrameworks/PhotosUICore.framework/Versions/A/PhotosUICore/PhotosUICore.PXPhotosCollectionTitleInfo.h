@class NSString;

@interface PhotosUICore.PXPhotosCollectionTitleInfo : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;

@end
