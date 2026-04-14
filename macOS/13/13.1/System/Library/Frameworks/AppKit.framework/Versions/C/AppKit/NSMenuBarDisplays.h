@class NSMutableDictionary;

@interface NSMenuBarDisplays : NSObject {
    NSMutableDictionary *_dataByDisplay;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)revealedHeightForDisplay:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMenuBarBounds:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNotchBounds:(unsigned int)a0;
- (void)displayChanged:(unsigned int)a0 withSeed:(unsigned int)a1;
- (void)forEachActiveDisplayDo:(unsigned char)a0 withBlock:(id /* block */)a1;
- (id)_getDisplayData:(unsigned int)a0 createDataIfNecessary:(unsigned char)a1;
- (id)_lookupDataForDisplay:(unsigned int)a0;
- (id)_createDisplayData:(unsigned int)a0;
- (void)_getDisplayNotchBounds:(unsigned int)a0 withBoundsPtr:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
