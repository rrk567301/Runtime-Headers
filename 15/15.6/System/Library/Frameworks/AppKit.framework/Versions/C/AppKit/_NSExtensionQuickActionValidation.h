@class NSSet, NSString, _NSExtensionQuickActionInvocation;

@interface _NSExtensionQuickActionValidation : NSObject <_NSQuickActionValidation> {
    _NSExtensionQuickActionInvocation *_invocation;
    NSSet *_unvalidatedQuickActions;
    void *_observationInfo;
}

@property (readonly) char wantsAutovalidation;
@property (readonly, copy) NSSet *validQuickActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)accessInstanceVariablesDirectly;
+ (char)automaticallyNotifiesObserversOfValidQuickActions;
+ (id)validationForItemSource:(id)a0 quickActions:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (id)initForItemSource:(id)a0 quickActions:(id)a1;

@end
