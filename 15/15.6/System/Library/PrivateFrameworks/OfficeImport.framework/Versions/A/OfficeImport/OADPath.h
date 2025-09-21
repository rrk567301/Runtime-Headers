@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    char mStroked;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (id)elementAtIndex:(unsigned long long)a0;
- (unsigned long long)elementCount;
- (int)fillMode;
- (void)setFillMode:(int)a0;
- (void)addElement:(id)a0;
- (char)stroked;
- (void)setStroked:(char)a0;

@end
