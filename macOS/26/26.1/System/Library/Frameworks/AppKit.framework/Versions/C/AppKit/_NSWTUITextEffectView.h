@class NSMutableDictionary;
@protocol _NSWTUITextPreviewSource;

@interface _NSWTUITextEffectView : _NSWTUIView

@property (retain, nonatomic) NSMutableDictionary *textEffects;
@property BOOL sourceIsAsync;
@property (weak) id<_NSWTUITextPreviewSource> source;

- (id)initWithSource:(id)a0;
- (id)addEffect:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)removeEffect:(id)a0;
- (void)updateSnapshotForEffectID:(id)a0;

@end
