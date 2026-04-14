@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct __SCDynamicStore { } *_scstore;
}

@property (readonly, nonatomic) NSString *hostname;

+ (id)sharedClientInfo;

- (void)_refreshHostname;
- (void)dealloc;
- (id)init;
- (id)initInternal;
- (void).cxx_destruct;

@end
