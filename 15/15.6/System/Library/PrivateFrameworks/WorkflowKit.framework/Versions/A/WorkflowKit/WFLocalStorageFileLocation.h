@interface WFLocalStorageFileLocation : WFFileProviderLocation

+ (id)subpathFromURL:(id)a0;
+ (char)canRepresentURL:(id)a0 item:(id)a1 parentItems:(id)a2;
+ (id)subpathFromURL:(id)a0 item:(id)a1;

- (id)resolveLocationWithError:(id *)a0;
- (char)shouldShowUsersDuringDisplay:(id)a0;
- (char)isSupportedOnCurrentPlatform;

@end
