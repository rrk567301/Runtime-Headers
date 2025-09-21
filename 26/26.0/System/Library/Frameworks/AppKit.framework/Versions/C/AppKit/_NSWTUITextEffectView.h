@class NSMutableDictionary;
@protocol _NSWTUITextPreviewSource;

@interface _NSWTUITextEffectView : _NSWTUIView

@property (retain, nonatomic) NSMutableDictionary *textEffects;
@property BOOL sourceIsAsync;
@property (weak) id<_NSWTUITextPreviewSource> source;

- (BOOL)isFlipped;
- (id)addEffect:(id)a0;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)removeEffect:(id)a0;
- (void)updateSnapshotForEffectID:(id)a0;

@end
