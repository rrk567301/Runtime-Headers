@class _MXExtensionProvider;
@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

@interface _MXExtensionManager : NSObject

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id<_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (readonly, nonatomic) id<_MXExtensionLookupPolicy> lookupPolicy;

+ (id)_queue;
+ (id)managerWithLookupPolicy:(id)a0 delegate:(id)a1;
+ (id)managerWithExtensionLookupPolicy:(id)a0 updateHandler:(id /* block */)a1;
+ (id)_extensionsWithLookupPolicy:(id)a0;
+ (id)_lookupPolicyForUIExtension;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyWithExtensionPointNames:(id)a0;
+ (id)lookupPolicyForExtensionWithCapability:(id)a0;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)a0;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)a0;
+ (id)_lookupPolicyWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1 extensionProvider:(id)a2;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)a0;

@end
