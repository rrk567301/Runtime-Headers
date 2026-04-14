@class NSOperationQueue;

@interface CMMagicMountManagerInternal : NSObject {
    struct CMMagicMountStateStruct { double timestamp; BOOL mounted; } _currentMagicMountState;
    id /* block */ _magicMountStateHandler;
    NSOperationQueue *_magicMountStateQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *_magicMountStateDispatcher;
}

- (id)init;
- (id).cxx_construct;

@end
