@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWImageCache : NSObject {
    NSMutableDictionary *_imageCache;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedImageCache;

- (id)imageNamed:(id)a0;
- (id)init;
- (void)clearCache;
- (void)dealloc;
- (id)__imageNamed:(id)a0;

@end
