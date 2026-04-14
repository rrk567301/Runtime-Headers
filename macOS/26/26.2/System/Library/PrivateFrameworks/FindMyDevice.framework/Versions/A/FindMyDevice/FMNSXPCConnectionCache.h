@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FMNSXPCConnectionCache : NSObject

@property (class, readonly, nonatomic) FMNSXPCConnectionCache *sharedCache;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modsSerialQueue;
@property (retain, nonatomic) NSMutableDictionary *connectionsByServiceName;

- (void).cxx_destruct;
- (id)init;
- (id)resumeConnectionWithConfiguration:(id)a0;
- (void)dealloc;

@end
