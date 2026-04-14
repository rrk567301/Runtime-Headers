@class NSString, SLSlotView, UISSlotStyle;
@protocol SLDEmptySlotContentForwardDeclaration, SLDServiceProxyForwardDeclaration;

@interface SLDisambiguationAttributionContentView : NSView <SLDServiceProxyDelegate>

@property (retain, nonatomic) NSString *attributionID;
@property (retain, nonatomic) SLSlotView *slotView;
@property (nonatomic) BOOL remoteContentIsLoaded;
@property (retain, nonatomic) id<SLDEmptySlotContentForwardDeclaration> placeholderSlotContent;
@property (retain, nonatomic) id<SLDServiceProxyForwardDeclaration> pillProxy;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (id)initWithAttributionID:(id)a0 maxWidth:(double)a1;
- (double)expectedHeightWithRemoteContent;

@end
