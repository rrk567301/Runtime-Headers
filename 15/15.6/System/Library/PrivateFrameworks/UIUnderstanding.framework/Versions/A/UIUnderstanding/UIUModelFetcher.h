@class UIUModelFetcherCompat;

@interface UIUModelFetcher : NSObject

@property (readonly) UIUModelFetcherCompat *underlyingObject;

+ (char)areModelsAvailable;
+ (char)downloadModelSet:(long long)a0 timeout:(double)a1;
+ (char)downloadModels:(double)a0;

- (void).cxx_destruct;

@end
