@class NSString;

@interface PXSocialGroupRejectGroupAction : PXPhotosAction {
    void /* unknown type, empty encoding */ socialGroups;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroups:(id)a0;

@end
