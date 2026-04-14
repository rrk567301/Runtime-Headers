@class NSObject;
@protocol OS_dispatch_queue;

@interface AEDWindowPrimitivesProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)makePrimitives;

@end
