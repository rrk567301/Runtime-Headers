@class NSScrollView, NSMutableArray;

@interface _NSTextViewTextEffectsData : NSObject

@property (retain, nonatomic) NSMutableArray *textAnimationContexts;
@property (weak, nonatomic) NSScrollView *enclosingScrollView;
@property (nonatomic) BOOL isAnimatingReplacement;
@property (nonatomic) BOOL shouldFuseChunks;

- (id)init;
- (void).cxx_destruct;

@end
