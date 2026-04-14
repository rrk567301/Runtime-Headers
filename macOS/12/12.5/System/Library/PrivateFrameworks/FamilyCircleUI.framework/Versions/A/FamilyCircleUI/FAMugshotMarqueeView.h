@class FAProfilePictureStore, NSMutableDictionary, NSStackView;

@interface FAMugshotMarqueeView : NSView {
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    NSStackView *_marquee;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureStackView;
- (void)_configureMarquee;
- (void)_profilePictureStoreDidReloadImages:(id)a0;
- (id)_configureImageWithData:(id)a0;
- (id)_configureImageViewWithImage:(id)a0;
- (id)initWithFamilyCircle:(id)a0 profilePictureStore:(id)a1;

@end
