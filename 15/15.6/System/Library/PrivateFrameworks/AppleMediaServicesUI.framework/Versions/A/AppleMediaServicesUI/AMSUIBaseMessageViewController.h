@class NSString, NSImageSymbolConfiguration, AMSDialogRequest, NSColor, AMSUIMessageView, AMSBinaryPromise, NSImage, ACAccount;
@protocol AMSBagProtocol, AMSUIMessageViewControllerDelegate;

@interface AMSUIBaseMessageViewController : NSViewController <MicaPlayerDelegate, AMSUIMessageViewController>

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property char didEnqueueMetrics;
@property long long currentIconPlayCount;
@property char isImageSymbolImage;
@property (readonly) NSImageSymbolConfiguration *_effectiveImageSymbolConfiguration;
@property char _isLoadingImage;
@property (retain) NSImage *_loadedImage;
@property (readonly) unsigned long long _messageStyle;
@property (readonly) AMSUIMessageView *_messageView;
@property (readonly) NSColor *_messageTextColor;
@property (readonly) long long _primaryImageRenderingMode;
@property (readonly) NSColor *_titleTextColor;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property (readonly) AMSDialogRequest *dialogRequest;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property char shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_titleFont;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithRequest:(id)a0;
- (void)_commitAppearance;
- (void)_didTapActionButton:(id)a0;
- (void)_handleDialogResult:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_iconAnimationPlayCount;
- (id)_loadIconAssetWithURL:(id)a0;
- (id)_messageFont;
- (void)_notifyMetricsFields:(id)a0 isImpression:(char)a1;
- (void)_preloadImageIfNeeded;
- (void)_resetAndPlayMICAPlayer;
- (void)_setDialogRequest:(id)a0;
- (id)_setImageWithURL:(id)a0;
- (id)_setMICAIconAssetWithURL:(id)a0;
- (void)_startObservingMICAPlayer;
- (void)_updateTextWithAttributes;
- (void)enqueueImpressionEngagementMetrics;
- (void)enqueueImpressionMetrics;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (void)micaPlayerDidChangePlaybackTime:(id)a0 isPlaybackAtEnd:(char)a1;

@end
