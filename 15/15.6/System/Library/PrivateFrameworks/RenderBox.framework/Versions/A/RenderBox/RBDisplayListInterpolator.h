@class NSDictionary;
@protocol RBDisplayListContents, _RBDisplayListContents;

@interface RBDisplayListInterpolator : NSObject <NSCopying> {
    struct refcounted_ptr<const RB::DisplayList::Interpolator::Object> { struct Object *_p; } _interp;
    struct objc_ptr<id<_RBDisplayListContents>> { id<_RBDisplayListContents> _p; } _from;
    struct objc_ptr<id<_RBDisplayListContents>> { id<_RBDisplayListContents> _p; } _to;
    struct objc_ptr<NSDictionary *> { NSDictionary *_p; } _options;
}

@property (retain, nonatomic) id<RBDisplayListContents> from;
@property (readonly, nonatomic) id<RBDisplayListContents> to;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic, getter=isIdentity) char identity;
@property (readonly, nonatomic) char onlyFades;
@property (readonly, nonatomic) double activeDuration;

+ (id)interpolatorWithFrom:(id)a0 to:(id)a1 options:(id)a2;
+ (id)newInterpolatorWithFrom:(id)a0 to:(id)a1 options:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)drawInState:(struct _RBDrawingState { } *)a0 by:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectWithProgress:(float)a0;
- (id)contentsWithProgress:(float)a0;
- (id)copyContentsWithProgress:(float)a0;
- (id)initWithFrom:(id)a0 to:(id)a1 options:(id)a2;
- (double)maxAbsoluteVelocityWithProgress:(float)a0;

@end
