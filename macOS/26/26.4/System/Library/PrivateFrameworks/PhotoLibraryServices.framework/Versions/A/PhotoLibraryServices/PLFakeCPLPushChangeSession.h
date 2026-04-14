@class NSObject, PLFakeCPLLibraryManager;
@protocol OS_dispatch_queue;

@interface PLFakeCPLPushChangeSession : NSObject {
    PLFakeCPLLibraryManager *_libraryManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)forwardingTargetForSelector:(SEL)a0;

- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)commitChangeBatch:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithLibraryManager:(id)a0 queue:(id)a1;

@end
