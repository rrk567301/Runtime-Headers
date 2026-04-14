@class NSMutableDictionary, NSString, NSArray, CAContext;

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
    NSArray *_arrayOfAttributes;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (readonly, nonatomic) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (id)localizedStringForKey:(id)a0;
- (struct __CFArray { } *)imagesFromContexts:(struct __CFArray { } *)a0;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)updateCachedCandidate:(id)a0 withStickerIdentifier:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)a0;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)a0;
- (void)createContext;
- (id)initForLocalizedStrings;
- (id)updateCachedCandidate:(id)a0 withCandidateString:(id)a1;
- (id)accessibilityLabelForSlotID:(unsigned int)a0;
- (id)localizedApplicationNameWithBundleIdentifier:(id)a0;
- (void)cacheAccessibilityLabel:(id)a0 forSlotID:(unsigned int)a1;
- (void)dealloc;
- (id)_truncationSentinel;
- (void)clearSecureCandidateCache;
- (id)cachedCandidateForSecureCandidate:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)imageForSendCurrentLocationWithRenderTraits:(id)a0;
- (id)slotIDsFromSecureCandidates:(id)a0 withRenderTraits:(id)a1;
- (struct __CFArray { } *)imagesFromSecureCandidates:(id)a0 withRenderTraits:(id)a1 outAccessibilityLabels:(id *)a2;
- (void)recreateContext;
- (id)init;
- (struct __CFArray { } *)arrayOfContexts:(unsigned long long)a0 withRenderTraits:(id)a1;

@end
