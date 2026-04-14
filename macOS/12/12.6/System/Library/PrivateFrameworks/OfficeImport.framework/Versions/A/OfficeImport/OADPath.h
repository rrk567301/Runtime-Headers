@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)elementCount;
- (id)elementAtIndex:(unsigned long long)a0;
- (void)setFillMode:(int)a0;
- (int)fillMode;
- (void)addElement:(id)a0;
- (void)setStroked:(BOOL)a0;
- (BOOL)stroked;

@end
