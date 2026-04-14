@class NSURL, GEOStorefrontView;

@interface GEOStorefrontPresentationInfo : NSObject

@property (readonly, nonatomic) GEOStorefrontView *closeUpView;
@property (readonly, nonatomic) GEOStorefrontView *standOffView;
@property (readonly, nonatomic) NSURL *overlayImageURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStorefrontPresentation:(id)a0;

@end
