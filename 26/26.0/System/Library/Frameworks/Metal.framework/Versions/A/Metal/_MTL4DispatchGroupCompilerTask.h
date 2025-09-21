@class NSObject;
@protocol OS_dispatch_group;

@interface _MTL4DispatchGroupCompilerTask : _MTL4CompilerTask {
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

- (void)dealloc;
- (void)setGroup:(id)a0;
- (void)waitUntilCompleted;

@end
