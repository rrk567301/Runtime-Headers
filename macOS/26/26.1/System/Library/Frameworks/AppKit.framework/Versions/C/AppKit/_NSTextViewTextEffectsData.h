@class NSScrollView, NSMutableArray;

@interface _NSTextViewTextEffectsData : NSObject

@property (nonatomic) BOOL isAnimatingReplacement;
@property (nonatomic) BOOL shouldFuseChunks;
@property (retain, nonatomic) NSMutableArray *textAnimationContexts;
@property (weak, nonatomic) NSScrollView *enclosingScrollView;

- (void).cxx_destruct;
- (id)init;

@end
