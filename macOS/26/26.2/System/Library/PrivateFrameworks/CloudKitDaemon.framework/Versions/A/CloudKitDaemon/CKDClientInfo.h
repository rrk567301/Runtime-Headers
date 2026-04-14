@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct __SCDynamicStore { } *_scstore;
}

@property (readonly, nonatomic) NSString *hostname;

+ (id)sharedClientInfo;

- (void).cxx_destruct;
- (void)_refreshHostname;
- (id)init;
- (id)initInternal;
- (void)dealloc;

@end
