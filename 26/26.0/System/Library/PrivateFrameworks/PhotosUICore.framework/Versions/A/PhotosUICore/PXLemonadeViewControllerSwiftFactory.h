@interface PXLemonadeViewControllerSwiftFactory : NSObject <PXLemonadeViewControllerFactoryProtocol>

+ (id)sharedLibraryBannerViewControllerForConfiguration:(id)a0;
+ (unsigned long long)sidebarRoutingOptionsForDestination:(id)a0;
+ (id)viewControllerForSidebarNavigationDestination:(id)a0 photoLibrary:(id)a1 sidebarVisible:(BOOL)a2;
+ (id)viewControllerWithPhotoLibrary:(id)a0 destination:(id)a1;

- (id)init;

@end
