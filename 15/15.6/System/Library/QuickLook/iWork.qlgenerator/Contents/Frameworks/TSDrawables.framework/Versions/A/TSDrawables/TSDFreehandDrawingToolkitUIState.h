@class TSUColor;

@interface TSDFreehandDrawingToolkitUIState : TSPObject {
    unsigned long long _mostRecentToolTypeToRestore;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    char _eraserToolErasesWholeObjects;
}

@property (nonatomic) unsigned long long currentToolType;
@property (readonly, nonatomic) unsigned long long mostRecentRestorableToolType;

- (id)copy;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;
- (char)isEqualToFreehandDrawingToolkitUIState:(id)a0;
- (id)p_defaultColorForToolType:(unsigned long long)a0;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)a0;
- (unsigned long long)p_defaultToolType;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)a0;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (void)p_setDefaultToolType:(unsigned long long)a0;
- (void)p_setupDefaultValues;

@end
