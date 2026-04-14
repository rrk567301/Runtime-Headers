@interface IMSingletonProxy : NSProxy {
    id _singleton;
    id _singletonOverride;
    Class _overrideClass;
}

+ (void)initialize;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)__isSingletonProxy__im;
- (id)singletonRef;
- (id)singletonOverrideRef;
- (id)initWithSingleton:(id)a0 singletonOverride:(id)a1;
- (void)setSingletonOverride:(id)a0;

@end
