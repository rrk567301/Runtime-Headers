@class ESDContainer;

@interface ESDObject : NSObject {
    struct EshObject { void /* function */ **x0; unsigned short x1; } *mEshObject;
    ESDContainer *mParent;
    BOOL mIsChart;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)parent;
- (id)initWithType:(unsigned short)a0;
- (id)initFromReader:(struct OcReader { void /* function */ **x0; struct EshObjectFactory *x1; } *)a0 type:(unsigned short)a1 version:(unsigned short)a2;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)eshObject;
- (BOOL)isChart;
- (void)setChart:(BOOL)a0;
- (void *)eshShape;
- (void *)eshGroup;
- (int)shapeID;
- (id)initWithEshObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (void)writeToWriter:(struct OcWriter { void /* function */ **x0; } *)a0;
- (id)initForExcelBinaryWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;
- (id)initPBWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;

@end
