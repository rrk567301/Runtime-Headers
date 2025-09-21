@class NSMutableArray, NSUICollectionReusableView, NSUICollectionViewLayoutAttributes;

@interface NSUICollectionViewAnimation : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    id /* block */ _animationBlock;
    struct { unsigned char animateFromCurrentPosition : 1; unsigned char deleteAterAnimation : 1; unsigned char rasterizeAfterAnimation : 1; unsigned char resetRasterizationAfterAnimation : 1; } _collectionViewAnimationFlags;
}

@property (readonly, nonatomic) NSUICollectionReusableView *view;
@property (readonly, nonatomic) unsigned long long viewType;
@property (readonly, nonatomic) NSUICollectionViewLayoutAttributes *finalLayoutAttributes;
@property (readonly, nonatomic) double startFraction;
@property (readonly, nonatomic) double endFraction;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) char animateFromCurrentPosition;
@property (readonly, nonatomic) char deleteAfterAnimation;
@property (nonatomic) char rasterizeAfterAnimation;
@property (nonatomic) char resetRasterizationAfterAnimation;

- (void)dealloc;
- (id)description;
- (void)start;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)addStartupHandler:(id /* block */)a0;
- (id)initWithView:(id)a0 viewType:(unsigned long long)a1 finalLayoutAttributes:(id)a2 duration:(double)a3 startFraction:(double)a4 endFraction:(double)a5 animateFromCurrentPostion:(char)a6 deleteAfterAnimation:(char)a7 customAnimations:(id /* block */)a8;

@end
