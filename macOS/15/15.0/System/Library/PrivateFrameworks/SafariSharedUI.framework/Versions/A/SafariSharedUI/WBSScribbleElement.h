@class NSString, NSArray, NSURL, NSSet, WBSUserDefinedContentBlockerCrossSiteContent;

@interface WBSScribbleElement : NSObject <NSSecureCoding> {
    WBSUserDefinedContentBlockerCrossSiteContent *_crossSiteContent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, copy, nonatomic) NSString *selector;
@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } geometry;
@property (copy, nonatomic) NSURL *iframeSourceURL;
@property (copy, nonatomic) NSString *iframeTitle;
@property (copy, nonatomic) NSString *renderTreeText;
@property (copy, nonatomic) NSString *imageAnalysisText;
@property (copy, nonatomic) NSString *searchableText;
@property (copy, nonatomic) NSString *screenReaderText;
@property (nonatomic) unsigned long long anchor;
@property (nonatomic) long long positionType;
@property (copy, nonatomic) NSArray *allSelectorsIncludingShadowHosts;
@property (copy, nonatomic) NSSet *mediaAndLinkURLs;
@property (nonatomic) long long scribbleStrategy;
@property (retain, nonatomic) NSArray *targetedElements;
@property (readonly, nonatomic, getter=isOutOfFlow) BOOL outOfFlow;
@property (nonatomic) BOOL restoredFromGlobalRule;
@property (readonly, nonatomic) WBSUserDefinedContentBlockerCrossSiteContent *crossSiteContentIfAvailable;
@property (readonly, nonatomic) struct { double left; double top; double right; double bottom; } edgeInsets;
@property (readonly, nonatomic) double webViewZoomScale;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0;
- (void)_setUpWithTargetedElements:(id)a0 webView:(id)a1;
- (void)_updateEdgeInsetsAndScaleWithWebView:(id)a0;
- (struct CGPoint { double x0; double x1; })hitTestLocationInWebView:(id)a0;
- (id)initWithContentBlockerAction:(id)a0;
- (id)initWithTargetedElements:(id)a0 webView:(id)a1;
- (id)makeContentBlockerAction;

@end
