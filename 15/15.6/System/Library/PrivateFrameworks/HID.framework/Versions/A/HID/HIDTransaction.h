@interface HIDTransaction : NSObject {
    struct __IOHIDTransaction { } *_transaction;
}

@property long long direction;

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)a0;
- (char)commitElements:(id)a0 error:(out id *)a1;
- (char)commitElements:(id)a0 error:(out id *)a1 timeout:(long long)a2 callback:(id /* block */)a3;

@end
