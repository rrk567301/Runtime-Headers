@class NSString, LSDocumentProxy, NSURL, LSClaimBindingBindable;

@interface LSClaimBindingConfiguration : NSObject <NSSecureCoding> {
    LSClaimBindingBindable *_bindable;
    unsigned long long _bundleClassMask;
    unsigned char _bindingStyle;
    short _minimumNumericHandlerRank;
    short _maximumNumericHandlerRank;
    BOOL _addClaimRecordIfMissing;
    struct { BOOL ignoreNetworkVolumes; unsigned char allowWildcardClaims : 1; unsigned char ignoreStrongBindingPreferences : 1; unsigned char ignoreWeakBindingPreferences : 1; unsigned char requireOpenInPlace : 1; unsigned char honorPreferenceForNoHandler : 1; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long bundleClassMask;
@property (nonatomic) BOOL addClaimRecordIfMissing;
@property (readonly) NSString *typeIdentifier;
@property (readonly) NSURL *URL;
@property (readonly) LSDocumentProxy *documentProxy;
@property unsigned int rolesMask;
@property BOOL ignoreNetworkVolumes;
@property BOOL allowWildcardClaims;
@property BOOL allowNoneHandlerRank;
@property (copy) NSString *minimumHandlerRank;
@property (copy) NSString *maximumHandlerRank;
@property BOOL ignoreStrongBindingPreferences;
@property BOOL ignoreWeakBindingPreferences;
@property BOOL requireOpenInPlace;
@property BOOL honorPreferenceForNoHandler;

+ (id)oneTapOpenClaimBindingConfigurationForBindable:(id)a0;

- (id)URL;
- (id)initWithTypeIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (void)setHonorPreferenceForNoHandler:(BOOL)a0;
- (struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; unsigned int x5; id x6; struct LSVersionNumber { unsigned char x0[32]; } x7; id x8; BOOL x9; BOOL x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; id /* block */ x19; })_baseBindingEvaluatorForBindableWithAuditToken:(const struct { unsigned int x0[8]; } *)a0;
- (BOOL)allowNoneHandlerRank;
- (BOOL)allowWildcardClaims;
- (struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; unsigned int x5; id x6; struct LSVersionNumber { unsigned char x0[32]; } x7; id x8; BOOL x9; BOOL x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; id /* block */ x19; })bindingEvaluatorForAuditToken:(const struct { unsigned int x0[8]; } *)a0;
- (id)documentProxy;
- (BOOL)honorPreferenceForNoHandler;
- (BOOL)ignoreNetworkVolumes;
- (BOOL)ignoreStrongBindingPreferences;
- (BOOL)ignoreWeakBindingPreferences;
- (id)initWithBindable:(id)a0;
- (id)initWithDocumentProxy:(id)a0;
- (id)initWithDocumentProxy:(id)a0 bindingStyle:(unsigned char)a1;
- (id)maximumHandlerRank;
- (id)minimumHandlerRank;
- (BOOL)requireOpenInPlace;
- (void)setAllowNoneHandlerRank:(BOOL)a0;
- (void)setAllowWildcardClaims:(BOOL)a0;
- (void)setIgnoreNetworkVolumes:(BOOL)a0;
- (void)setIgnoreStrongBindingPreferences:(BOOL)a0;
- (void)setIgnoreWeakBindingPreferences:(BOOL)a0;
- (void)setMaximumHandlerRank:(id)a0;
- (void)setMinimumHandlerRank:(id)a0;
- (void)setRequireOpenInPlace:(BOOL)a0;

@end
