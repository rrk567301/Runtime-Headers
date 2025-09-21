@interface QCPatchController : NSController {
    void *_QCPatchControllerPrivate;
}

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (char)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_real_didChangeValueForKey:(id)a0;
- (void)_real_willChangeValueForKey:(id)a0;
- (id)patch;
- (void)setPatch:(id)a0;

@end
