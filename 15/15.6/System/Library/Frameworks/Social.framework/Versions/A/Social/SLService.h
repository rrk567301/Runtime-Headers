@interface SLService : NSObject

+ (id)allServices;
+ (id)serviceForServiceType:(id)a0;

- (id)serviceType;
- (id)accountType;
- (long long)maximumURLCount;
- (void)addExtraParameters:(id)a0 forRequest:(id)a1;
- (char)hasAccounts;
- (char)isFirstClassService;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (char)supportsImageURL:(id)a0;
- (char)supportsVideoURL:(id)a0;

@end
