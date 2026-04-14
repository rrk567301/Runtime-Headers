@interface QCPatchController : NSController {
    void *_QCPatchControllerPrivate;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_real_didChangeValueForKey:(id)a0;
- (void)_real_willChangeValueForKey:(id)a0;
- (id)patch;
- (void)setPatch:(id)a0;

@end
