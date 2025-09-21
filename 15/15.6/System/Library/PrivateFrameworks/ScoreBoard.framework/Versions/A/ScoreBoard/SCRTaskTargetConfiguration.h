@class NSString;
@protocol SCRTargetContextProvider, SCRSyncTargetContextProvider, SCRAsyncTargetContextProvider;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) id<SCRSyncTargetContextProvider> syncContextProvider;
@property (readonly, nonatomic) id<SCRAsyncTargetContextProvider> asyncContextProvider;
@property (readonly, nonatomic) id<SCRTargetContextProvider> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithTarget:(id)a0 contextProvider:(id)a1;
- (Class)_expectedTargetContextClass;
- (id)_expectedTargetContextProtocol;
- (id)_initWithTarget:(id)a0 syncProvider:(id)a1 asyncProvider:(id)a2;
- (void)_validateContext:(id)a0;
- (void)createContextWithCompletion:(id /* block */)a0;
- (id)initWithTarget:(id)a0 asyncContextProvider:(id)a1;
- (id)initWithTarget:(id)a0 syncContextProvider:(id)a1;
- (void)invalidateTargetContext:(id)a0 completion:(id /* block */)a1;

@end
