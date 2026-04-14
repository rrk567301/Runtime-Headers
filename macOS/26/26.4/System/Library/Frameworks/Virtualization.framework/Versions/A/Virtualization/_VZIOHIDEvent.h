@interface _VZIOHIDEvent : NSObject {
    struct CfPtr<__IOHIDEvent *> { struct __IOHIDEvent *_object; } _event;
}

@property (readonly) struct __IOHIDEvent { } *event;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIOHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
