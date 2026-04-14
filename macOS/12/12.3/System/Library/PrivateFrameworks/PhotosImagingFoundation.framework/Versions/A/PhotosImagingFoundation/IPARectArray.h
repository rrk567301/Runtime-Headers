@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {
    void *_imp;
}

+ (id)rectArray;
+ (id)rectArrayWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateRects:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(unsigned long long)a0;
- (id)initWithRectArray:(id)a0;

@end
