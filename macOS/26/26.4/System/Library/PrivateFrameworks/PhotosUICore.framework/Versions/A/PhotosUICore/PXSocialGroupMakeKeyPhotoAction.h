@class NSString;

@interface PXSocialGroupMakeKeyPhotoAction : PXPhotosAction {
    void /* unknown type, empty encoding */ socialGroup;
    void /* unknown type, empty encoding */ newKeyAsset;
    void /* unknown type, empty encoding */ originalKeyAsset;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroup:(id)a0 newKeyAsset:(id)a1;

@end
