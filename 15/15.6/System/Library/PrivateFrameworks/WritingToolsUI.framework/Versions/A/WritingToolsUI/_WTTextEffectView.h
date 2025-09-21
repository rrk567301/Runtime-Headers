@class NSValue, NSMutableDictionary;
@protocol _WTTextPreviewAsyncSource, _WTTextPreviewSource;

@interface _WTTextEffectView : _WTView

@property (retain, nonatomic) NSMutableDictionary *textEffects;
@property char sourceIsAsync;
@property (retain) NSValue *replaceSourceRect;
@property (retain) NSValue *replaceDestinationRect;
@property double replaceSourceDuration;
@property double replaceDestinationDuration;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedVisibleRect;
@property (weak) id<_WTTextPreviewSource> source;
@property (weak) id<_WTTextPreviewAsyncSource> asyncSource;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)updateSnapshots;
- (id)addEffect:(id)a0;
- (char)isFlipped;
- (void)removeAllEffects;
- (void)removeAllEffectsAnimated:(char)a0;
- (id)removeEffect:(id)a0;
- (id)removeEffect:(id)a0 animated:(char)a1;
- (void)updateSnapshotForEffectID:(id)a0;
- (char)hasActiveEffects;
- (id)initWithAsyncSource:(id)a0;
- (void)_cacheHeightOfPreviews:(id)a0 forEffect:(id)a1;
- (void)_commonLayoutSubviews;
- (void)_handleAddEffect:(id)a0 forAsyncSource:(id)a1;
- (void)_handleAddEffect:(id)a0 forSource:(id)a1;
- (char)_shouldApplyRemainderEffectForEffect:(id)a0;
- (char)hasActiveEffect:(id)a0;
- (void)updateSnapshotForEffect:(id)a0;

@end
