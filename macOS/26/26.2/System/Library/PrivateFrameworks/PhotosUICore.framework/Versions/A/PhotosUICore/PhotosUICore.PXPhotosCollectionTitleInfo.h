@class NSString;

@interface PhotosUICore.PXPhotosCollectionTitleInfo : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)a0;

@end
