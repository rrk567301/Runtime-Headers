@class NSTextLayoutFragment, NSArray, NSString, NSTextContainer, NSMapTable;
@protocol NSTextLocation, _NSTextLayoutAttachmentLayoutContextDelegate;

@interface _NSTextAttachmentLayoutContext : NSObject <NSTextViewportElementProvider> {
    NSMapTable *_textAttachmentInfoTable;
    NSArray *_sortedKeys;
    NSArray *_textAttachmentViewProviders;
    id<NSTextLocation> _baseLocation;
}

@property BOOL hasViewProvider;
@property BOOL hasResolvedAttachmentFrame;
@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly) id<_NSTextLayoutAttachmentLayoutContextDelegate> delegate;
@property NSTextContainer *textContainer;
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property long long applicationFrameworkContext;
@property BOOL usesFontLeading;
@property (weak) NSTextLayoutFragment *textLayoutFragment;
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAttachmentFrames;
- (void)reset;
- (void)dealloc;
- (void)enumerateViewportElementsFromLocation:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (id)textAttachmentLayoutInfoForLocation:(id)a0 attributes:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })proposedLineFragmentRectForLocation:(id)a0 attributes:(id)a1 baselineOffset:(out double *)a2;
- (void)notifyTextLayoutManagerAboutTextAttachmentInvalidation;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)_flushCachedInfo;
- (id)_sortedKeys;
- (id)textContainerForLocation:(id)a0;
- (void)_adjustLocations;
- (void).cxx_destruct;

@end
