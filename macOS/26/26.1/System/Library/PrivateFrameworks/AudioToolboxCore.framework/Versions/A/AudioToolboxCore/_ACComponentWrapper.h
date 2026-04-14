@interface _ACComponentWrapper : NSObject <NSSecureCoding> {
    struct shared_ptr<APComponent> { struct APComponent *__ptr_; struct __shared_weak_count *__cntrl_; } mComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithComponent:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
