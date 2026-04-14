@class NSValue, NSMutableDictionary;
@protocol _WTTextPreviewAsyncSource, _WTTextPreviewSource;

@interface _WTTextEffectView : _WTView

@property (retain, nonatomic) NSMutableDictionary *textEffects;
@property BOOL sourceIsAsync;
@property (retain) NSValue *replaceSourceRect;
@property (retain) NSValue *replaceDestinationRect;
@property (weak) id<_WTTextPreviewSource> source;
@property (weak) id<_WTTextPreviewAsyncSource> asyncSource;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)updateSnapshots;
- (id)addEffect:(id)a0;
- (BOOL)isFlipped;
- (void)removeAllEffects;
- (id)removeEffect:(id)a0;
- (void)updateSnapshotForEffectID:(id)a0;
- (id)initWithAsyncSource:(id)a0;
- (void)_cacheHeightOfPreviews:(id)a0 forEffect:(id)a1;
- (void)_commonLayoutSubviews;
- (void)_handleAddEffect:(id)a0 forAsyncSource:(id)a1;
- (void)_handleAddEffect:(id)a0 forSource:(id)a1;
- (BOOL)_shouldApplyRemainderEffectForEffect:(id)a0;
- (void)removeAllEffectsAnimated:(BOOL)a0;
- (id)removeEffect:(id)a0 animated:(BOOL)a1;

@end
