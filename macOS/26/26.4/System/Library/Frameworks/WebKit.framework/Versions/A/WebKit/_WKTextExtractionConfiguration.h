@class NSArray, _WKJSHandle, NSDictionary;

@interface _WKTextExtractionConfiguration : NSObject {
    struct RetainPtr<_WKJSHandle> { _WKJSHandle *m_ptr; } _targetNode;
    struct HashMap<WTF::RetainPtr<NSString>, WTF::HashMap<WTF::RetainPtr<_WKJSHandle>, WTF::RetainPtr<NSString>>, WTF::DefaultHash<WTF::RetainPtr<NSString>>, WTF::HashTraits<WTF::RetainPtr<NSString>>, WTF::HashTraits<WTF::HashMap<WTF::RetainPtr<_WKJSHandle>, WTF::RetainPtr<NSString>>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes, WTF::FastMalloc> { struct HashTable<WTF::RetainPtr<NSString>, WTF::KeyValuePair<WTF::RetainPtr<NSString>, WTF::HashMap<WTF::RetainPtr<_WKJSHandle>, WTF::RetainPtr<NSString>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<NSString>, WTF::HashMap<WTF::RetainPtr<_WKJSHandle>, WTF::RetainPtr<NSString>>>>, WTF::DefaultHash<WTF::RetainPtr<NSString>>, WTF::HashMap<WTF::RetainPtr<NSString>, WTF::HashMap<WTF::RetainPtr<_WKJSHandle>, WTF::RetainPtr<NSString>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<NSString>>, WTF::FastMalloc> { void *m_table; } m_impl; } _clientNodeAttributes;
    struct RetainPtr<NSDictionary<NSString *,NSString *>> { NSDictionary *m_ptr; } _replacementStrings;
    struct RetainPtr<NSArray<_WKJSHandle *>> { NSArray *m_ptr; } _nodesToSkip;
}

@property (class, readonly, copy, nonatomic) _WKTextExtractionConfiguration *configurationForVisibleTextOnly;

@property (nonatomic) BOOL mergeParagraphs;
@property (nonatomic) BOOL skipNearlyTransparentContent;
@property (nonatomic) BOOL onlyIncludeVisibleText;
@property (nonatomic) long long outputFormat;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) BOOL includeURLs;
@property (nonatomic) BOOL includeRects;
@property (nonatomic) long long nodeIdentifierInclusion;
@property (nonatomic) BOOL includeEventListeners;
@property (nonatomic) BOOL includeAccessibilityAttributes;
@property (nonatomic) BOOL includeTextInAutoFilledControls;
@property (nonatomic) unsigned long long maxWordsPerParagraph;
@property (copy, nonatomic) _WKJSHandle *targetNode;
@property (copy, nonatomic) NSArray *nodesToSkip;
@property (copy, nonatomic) NSDictionary *replacementStrings;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) BOOL shortenURLs;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)_initForOnlyVisibleText:(BOOL)a0;
- (void)addClientAttribute:(id)a0 value:(id)a1 forNode:(id)a2;
- (void)forEachClientNodeAttribute:(id /* block */)a0;

@end
