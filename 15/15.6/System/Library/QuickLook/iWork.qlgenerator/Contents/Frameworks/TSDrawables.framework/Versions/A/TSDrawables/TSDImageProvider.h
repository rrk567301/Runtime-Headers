@class TSPData, TSPObjectContext, TSUWeakReference;

@interface TSDImageProvider : NSObject {
    TSPData *mImageData;
    TSUWeakReference *mObjectContextReference;
    _Atomic int mRetainCount;
    _Atomic int mInterest;
}

@property (nonatomic) int i_loadState;
@property (readonly, nonatomic) char i_hasFlushableContent;
@property (readonly, nonatomic) unsigned long long i_flushableMemoryEstimate;
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, weak, nonatomic) TSPObjectContext *objectContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) unsigned long long imageGamut;
@property (readonly, nonatomic) char prefersHDRRendering;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dpiAdjustedNaturalSize;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isError;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void)flush;
- (id)initWithImageData:(id)a0;
- (int)interest;
- (void)addInterest;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)i_commonInit;
- (void)removeInterest;
- (void)i_flushIfNoOneUsing;

@end
