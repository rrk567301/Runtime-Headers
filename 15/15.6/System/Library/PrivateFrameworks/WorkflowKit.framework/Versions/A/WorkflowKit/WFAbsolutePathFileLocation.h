@interface WFAbsolutePathFileLocation : WFFilePathLocation

+ (id)subpathFromURL:(id)a0;
+ (char)canRepresentURL:(id)a0;

- (id)resolveLocationWithError:(id *)a0;
- (char)shouldShowUsersDuringDisplay:(id)a0;
- (char)isSupportedOnCurrentPlatform;

@end
