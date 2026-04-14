@class NSObject;
@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelled;
}

+ (id)sharedRenderer;
+ (void)clearSharedRenderer;

- (id)init;
- (void).cxx_destruct;
- (void)performRenderOperation:(id)a0;

@end
