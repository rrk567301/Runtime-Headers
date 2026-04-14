@protocol _VZDisplayPresenterDelegate;

@interface _VZDisplayPresenter : NSObject {
    struct unique_ptr<_VZDisplayPresenterMessenger, std::default_delete<_VZDisplayPresenterMessenger>> { struct _VZDisplayPresenterMessenger *__ptr_; } _messenger;
    struct unique_ptr<Base::Xpc::Connection, std::default_delete<Base::Xpc::Connection>> { struct Connection *__ptr_; } _xpc_connection;
    id<_VZDisplayPresenterDelegate> _delegate;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastCursorUpdate;
    struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastFrameUpdate;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
