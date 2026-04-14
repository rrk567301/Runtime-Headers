@interface WCRBlockPage : NSObject

+ (id)_xssSafeStringFromString:(id)a0;
+ (id)_allowedWebSitesHTML:(id)a0;
+ (id)_css:(id)a0;
+ (id)_fileContentWithName:(id)a0 inLanguage:(id)a1 extension:(id)a2;
+ (id)_javascript:(id)a0;
+ (id)blockPageForUser:(id)a0 inLanguage:(id)a1 withUserVisibleURLString:(id)a2 withFormPostToURLString:(id)a3 withFormRestrictedPageURLString:(id)a4 withFormRestrictedPageTitle:(id)a5 withAllowedWebsites:(id)a6 isAllowedWebsitesOnlyBlock:(BOOL)a7 isNetworkAccount:(BOOL)a8 allowsOverrides:(BOOL)a9;
+ (id)createBlockPageFromTemplate:(id)a0 inLanguage:(id)a1 withUserVisibleURLString:(id)a2 isAllowedWebsitesOnlyBlock:(BOOL)a3 withAllowedWebsites:(id)a4 withFormPostToURLString:(id)a5 withFormRestrictedPageURLString:(id)a6 withFormRestrictedPageTitle:(id)a7;

@end
