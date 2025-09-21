@class NSURL, NSString;

@interface FTServerBag : NSObject {
    long long _type;
}

@property (readonly) NSURL *bagURL;
@property (readonly) NSString *apsEnvironmentName;
@property (readonly) char allowSelfSignedCertificates;
@property (readonly) char allowUnsignedBags;
@property (readonly) char isLoaded;
@property (readonly) char isLoading;
@property (readonly) char isInDebilitatedMode;
@property (readonly) char isServerAvailable;

+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)a0;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(long long)a0;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)forceBagLoad;
- (void)startBagLoad;
- (id)urlWithKey:(id)a0;
- (id)_bag;
- (id)_cachedBag;
- (id)initWithBagType:(long long)a0;

@end
