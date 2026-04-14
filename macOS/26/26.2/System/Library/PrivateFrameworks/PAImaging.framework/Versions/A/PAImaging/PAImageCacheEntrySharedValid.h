@class NSObject;
@protocol OS_dispatch_queue;

@interface PAImageCacheEntrySharedValid : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL valid;

- (void).cxx_destruct;
- (id)init;

@end
