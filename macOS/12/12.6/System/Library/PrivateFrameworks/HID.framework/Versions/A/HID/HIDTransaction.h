@interface HIDTransaction : NSObject {
    struct __IOHIDTransaction { } *_transaction;
}

@property long long direction;

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)a0;
- (BOOL)commitElements:(id)a0 error:(out id *)a1;

@end
