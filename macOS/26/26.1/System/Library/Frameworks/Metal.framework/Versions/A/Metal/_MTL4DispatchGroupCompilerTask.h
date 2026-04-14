@class NSObject;
@protocol OS_dispatch_group;

@interface _MTL4DispatchGroupCompilerTask : _MTL4CompilerTask {
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

- (void)setGroup:(id)a0;
- (void)dealloc;
- (void)waitUntilCompleted;

@end
