@class NSURL, LPTheme, LPImagePresentationProperties, LPImage, LPHTMLComponent, LPCSSResolver, LPCaptionBarPresentationProperties, DOMDocument, NSString, LPMetadataProvider, DOMDocumentFragment, LPLinkMetadata, LPPointUnit, DOMElement, NSColor;
@protocol LPLinkHTMLGeneratorDelegate;

@interface LPLinkHTMLGenerator : NSObject {
    LPMetadataProvider *_pendingMetadataProvider;
    char _mayReceiveAdditionalMetadata;
    char _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    char _everBuiltView;
}

@property (readonly, nonatomic) DOMDocument *parentDocument;
@property (readonly, nonatomic) LPCSSResolver *cssResolver;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) LPTheme *theme;
@property (readonly, nonatomic) char isPreliminary;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) LPPointUnit *rootWidth;
@property (readonly, nonatomic) NSColor *dominantImageBackgroundColor;
@property (nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) char _useVariablesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) char _includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) char _includeDarkInterfaceInlineStyles;
@property (nonatomic, setter=_setAllowsTapToLoad:) char _allowsTapToLoad;
@property (nonatomic, setter=_setDisableAutoPlay:) char _disableAutoPlay;
@property (readonly, nonatomic) char _canTapToLoad;
@property (weak, nonatomic) id<LPLinkHTMLGeneratorDelegate> delegate;
@property (readonly, retain, nonatomic) DOMDocumentFragment *documentFragment;
@property (nonatomic) char useInlineStyles;
@property (nonatomic) char applyCornerRadiusToLink;
@property (nonatomic) char generateEmailCompatibleMarkup;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *URL;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 document:(id)a1;
- (void)_setMetadata:(id)a0 isFinal:(char)a1;
- (id)_URLForImage:(id)a0;
- (id)_URLForResource:(id)a0 withMIMEType:(id)a1;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (id)_createRootElement;
- (void)_fetchMetadata;
- (id)_presentationOverrideBackgroundColorForProperties:(id)a0;
- (void)_rebuildView;
- (void)_setPresentationProperties:(id)a0;
- (void)clearCurrentLayout;
- (id)initWithMetadataLoadedFromURL:(id)a0 document:(id)a1;
- (id)initWithPresentationProperties:(id)a0 URL:(id)a1 document:(id)a2;
- (id)initWithPresentationProperties:(id)a0 document:(id)a1;

@end
