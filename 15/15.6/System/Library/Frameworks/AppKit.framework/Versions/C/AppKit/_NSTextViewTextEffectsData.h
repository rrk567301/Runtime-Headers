@class NSScrollView, NSMutableArray;

@interface _NSTextViewTextEffectsData : NSObject

@property (nonatomic) char isAnimatingReplacement;
@property (nonatomic) char shouldFuseChunks;
@property (retain, nonatomic) NSMutableArray *textAnimationContexts;
@property (weak, nonatomic) NSScrollView *enclosingScrollView;

- (id)init;
- (void).cxx_destruct;

@end
