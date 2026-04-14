@interface GKImageRestrictions : NSObject

+ (BOOL)isAuthorizedForGamesWithImageData:(id)a0;
+ (BOOL)isAuthorizedForGamesWithImageURL:(id)a0;
+ (void)setForCurrentProcess;

- (id)init;
- (void).cxx_destruct;

@end
