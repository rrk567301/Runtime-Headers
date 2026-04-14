@interface SLService : NSObject

+ (id)serviceForServiceType:(id)a0;
+ (id)allServices;

- (id)serviceType;
- (id)accountType;
- (BOOL)isFirstClassService;
- (void)addExtraParameters:(id)a0 forRequest:(id)a1;
- (BOOL)hasAccounts;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (BOOL)supportsImageURL:(id)a0;
- (BOOL)supportsVideoURL:(id)a0;

@end
