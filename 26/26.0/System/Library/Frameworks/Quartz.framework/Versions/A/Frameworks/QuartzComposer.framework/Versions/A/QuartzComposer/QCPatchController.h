@interface QCPatchController : NSController {
    void *_QCPatchControllerPrivate;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_real_didChangeValueForKey:(id)a0;
- (void)_real_willChangeValueForKey:(id)a0;
- (id)patch;
- (void)setPatch:(id)a0;

@end
