@class NSDictionary, NSString, NSArray, NSUUID, NSURL, LSApplicationExtensionRecord, NSBundle;
@protocol EXExtensionInfoProviding, PKPlugIn;

@interface NSExtension : NSObject

@property (class, readonly, nonatomic) id<EXExtensionInfoProviding> extensionInfoForCurrentProcess;

@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly, nonatomic) NSString *containingBundleIdentifier;
@property (readonly, copy) NSArray *_personas;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (readonly) NSUUID *uuid;
@property (readonly) NSURL *URL;
@property (readonly) LSApplicationExtensionRecord *extensionRecord;
@property long long wantsDedicatedQueue;
@property (readonly) BOOL _wantsProcessPerRequest;
@property (retain, setter=_setPlugIn:) id<PKPlugIn> _plugIn;
@property (readonly, retain) NSBundle *_extensionBundle;
@property (readonly, copy) NSString *_localizedName;
@property (readonly, copy) NSString *_localizedShortName;
@property (copy) id /* block */ _requestPostCompletionBlock;
@property (copy) id /* block */ _requestPostCompletionBlockWithItems;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *version;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSString *extensionPointIdentifier;
@property (readonly, copy) NSArray *icons;
@property (readonly) BOOL optedIn;
@property (copy) id /* block */ requestCompletionBlock;
@property (copy) id /* block */ requestCancellationBlock;
@property (copy) id /* block */ requestInterruptionBlock;

+ (id)extensionWithIdentity:(id)a0 error:(id *)a1;
+ (BOOL)evaluateActivationRule:(id)a0 withExtensionItemsRepresentation:(id)a1 error:(id *)a2;
+ (id)extensionRepresentedBy:(id)a0 error:(id *)a1;
+ (void)extensionWithURL:(id)a0 completion:(id /* block */)a1;
+ (id)globalStateQueueForExtension:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)extensionWithIdentifier:(id)a0 excludingDisabledExtensions:(BOOL)a1 error:(id *)a2;
+ (id)extensionsWithMatchingAttributes:(id)a0 error:(id *)a1;
+ (void)extensionWithUUID:(id)a0 completion:(id /* block */)a1;
+ (id)beginMatchingExtensionsWithAttributes:(id)a0 completion:(id /* block */)a1;
+ (void)extensionsWithMatchingAttributes:(id)a0 completion:(id /* block */)a1;
+ (id)predicateForActivationRule:(id)a0;
+ (BOOL)evaluateActivationRule:(id)a0 withExtensionItemsRepresentation:(id)a1;
+ (BOOL)_shouldLogExtensionDiscovery;
+ (id)extensionWithIdentifier:(id)a0 error:(id *)a1;
+ (void)initializeFiltering;
+ (void)endMatchingExtensions:(id)a0;
+ (BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)a0 withExtensionItemsRepresentation:(id)a1;

- (id)uuid;
- (id)_personas;
- (id)extensionRecord;
- (id)URL;
- (void)beginExtensionRequest:(id)a0 completion:(id /* block */)a1;
- (id)beginExtensionRequest:(id)a0 error:(id *)a1;
- (void)beginRequest:(id)a0 completion:(id /* block */)a1;
- (id)beginRequest:(id)a0 error:(id *)a1;
- (id)extensionIdentityWithError:(id *)a0;
- (void)_hostDidBecomeActiveNote:(id)a0;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (void)_hostDidEnterBackgroundNote:(id)a0;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 listenerEndpoint:(id)a2 completion:(id /* block */)a3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 error:(id *)a2;
- (id)objectForInfoDictionaryKey:(id)a0;
- (BOOL)_isPhotoServiceAccessGranted;
- (BOOL)attemptOptIn:(id *)a0;
- (void)_kill:(int)a0;
- (void)beginExtensionRequestWithInputItems:(id)a0 listenerEndpoint:(id)a1 completion:(id /* block */)a2;
- (void)beginExtensionRequestWithInputItems:(id)a0 completion:(id /* block */)a1;
- (void)cancelExtensionRequestWithIdentifier:(id)a0;
- (id)_init;
- (BOOL)attemptOptOut:(id *)a0;
- (id)beginExtensionRequestWithInputItems:(id)a0 error:(id *)a1;
- (int)pidForRequestIdentifier:(id)a0;
- (id)_extensionContextForUUID:(id)a0;
- (void)_hostWillResignActiveNote:(id)a0;
- (void)_safelyEndUsing:(id /* block */)a0;
- (void)_hostWillEnterForegroundNote:(id)a0;
- (void)_safelyBeginUsing:(id /* block */)a0;
- (id)init;
- (void)_dropAssertion;
- (void)_setAllowedErrorClasses:(id)a0;
- (id)_initWithPKPlugin:(id)a0;

@end
