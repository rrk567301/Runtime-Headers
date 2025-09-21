@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject

@property (retain) FTMessageDelivery *delivery;
@property (retain) NSArray *regions;
@property (readonly) char isLoaded;
@property (readonly) char isLoading;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startLoading;
- (id)regionForID:(id)a0;
- (void)_buildMessageDeliveryIfNeeded;
- (void)flushRegions;

@end
