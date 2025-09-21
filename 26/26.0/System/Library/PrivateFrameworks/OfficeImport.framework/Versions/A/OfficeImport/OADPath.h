@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)addElement:(id)a0;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)init;
- (void)setFillMode:(int)a0;
- (id)description;
- (int)fillMode;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (unsigned long long)elementCount;
- (BOOL)stroked;
- (void)setStroked:(BOOL)a0;

@end
