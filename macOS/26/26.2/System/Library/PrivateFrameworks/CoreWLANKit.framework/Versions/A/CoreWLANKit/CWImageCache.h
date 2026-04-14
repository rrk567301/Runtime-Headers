@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWImageCache : NSObject {
    NSMutableDictionary *_imageCache;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedImageCache;

- (void)clearCache;
- (id)init;
- (id)imageNamed:(id)a0;
- (void)dealloc;
- (id)__imageNamed:(id)a0;

@end
