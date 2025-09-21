@class HMFLocationAuthorization, NSString, NSOperationQueue, NSURL, NSArray;

@interface HMHomeManagerConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying>

@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) char discretionary;
@property unsigned long long inactiveUpdatingLevel;
@property (getter=isAdaptive) char adaptive;
@property (retain) NSOperationQueue *delegateQueue;
@property (retain) HMFLocationAuthorization *locationAuthorization;
@property (readonly) char shouldConnect;
@property (readonly) char canUseCache;
@property (readonly) char canWriteToCache;
@property (readonly) NSURL *cacheURL;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;

@end
