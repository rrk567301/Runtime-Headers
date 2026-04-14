@class NSMutableDictionary, NSString, NSArray, CAContext;

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
    NSArray *_arrayOfAttributes;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (readonly, nonatomic) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)a0;
- (void)dealloc;
- (id)_truncationSentinel;
- (struct __CFArray { } *)imagesFromSecureCandidates:(id)a0 withRenderTraits:(id)a1 outAccessibilityLabels:(id *)a2;
- (struct __CFArray { } *)arrayOfContexts:(unsigned long long)a0 withRenderTraits:(id)a1;
- (id)accessibilityLabelForSlotID:(unsigned int)a0;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (struct CGImage { } *)imageForSendCurrentLocationWithRenderTraits:(id)a0;
- (id)slotIDsFromSecureCandidates:(id)a0 withRenderTraits:(id)a1;
- (id)init;
- (struct __CFArray { } *)imagesFromContexts:(struct __CFArray { } *)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)recreateContext;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)a0;
- (id)localizedApplicationNameWithBundleIdentifier:(id)a0;
- (id)initForLocalizedStrings;
- (id)localizedStringForKey:(id)a0;
- (id)cachedCandidateForSecureCandidate:(id)a0;
- (void)clearSecureCandidateCache;
- (id)updateCachedCandidate:(id)a0 withStickerIdentifier:(id)a1;
- (void)createContext;
- (id)updateCachedCandidate:(id)a0 withCandidateString:(id)a1;
- (void).cxx_destruct;
- (void)cacheAccessibilityLabel:(id)a0 forSlotID:(unsigned int)a1;

@end
