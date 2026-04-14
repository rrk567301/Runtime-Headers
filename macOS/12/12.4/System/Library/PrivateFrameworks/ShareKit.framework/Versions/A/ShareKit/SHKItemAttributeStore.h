@class NSDictionary, NSObject;
@protocol SHKShareItem, OS_dispatch_semaphore;

@interface SHKItemAttributeStore : NSObject

@property (retain, nonatomic) id<SHKShareItem> shareItem;
@property (retain) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSDictionary *attributes;

+ (void)notifySpotlightShareItems:(id)a0 wereSharedWithSharingService:(id)a1;
+ (struct __MDItem { } *)createMDItemForShareItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithShareItem:(id)a0;
- (void)startFectchingAttributes;
- (void)fetchAttributesWithCompletionHandler:(id /* block */)a0;
- (void)attributesForShareItem:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
