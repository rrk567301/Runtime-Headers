@class NSString;
@protocol NSLocking;

@interface HAP2Lock : HAP2LoggingObject {
    _Atomic unsigned long long _lockCount;
}

@property (readonly, nonatomic) id<NSLocking> internalLock;
@property (readonly, nonatomic) NSString *name;

+ (id)new;
+ (id)lockWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)assertOwner;
- (void)_performBlock:(id /* block */)a0 allowRecursive:(char)a1;
- (id)initWithLock:(id)a0 name:(id)a1;

@end
