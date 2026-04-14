@class NSObject;
@protocol OS_dispatch_queue;

@interface AMFIRequirementsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct __SecRequirement { } *_restrictedRequirement;
    BOOL _isRunningInternalBuild;
}

@property (readonly, nonatomic) struct __SecRequirement { } *developerRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *basicRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *dyldSimRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *appleRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *legacyDebuggerRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *restrictedRequirement;
@property (readonly, nonatomic) BOOL allowUnsafeDynamicLinking;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)preferenceQueue;
- (void)resetRestrictedRequirement;
- (void)checkCodeRequirementsPreferenceUnsynchronized;
- (void)checkCodeRequirementsPreference;

@end
