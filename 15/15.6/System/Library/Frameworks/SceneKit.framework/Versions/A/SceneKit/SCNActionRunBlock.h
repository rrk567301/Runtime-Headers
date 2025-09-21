@class NSObject;
@protocol OS_dispatch_queue;

@interface SCNActionRunBlock : SCNAction {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (char)supportsSecureCoding;
+ (id)runBlock:(id /* block */)a0 queue:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;

@end
