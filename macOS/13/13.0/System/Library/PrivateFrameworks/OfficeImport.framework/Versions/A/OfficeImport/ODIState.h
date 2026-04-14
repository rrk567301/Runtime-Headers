@class NSMutableArray, OADDrawingTheme, OADShapeStyle, OADGroup, ODDDiagram, OADOrientedBounds;

@interface ODIState : NSObject {
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLogicalBounds;
    double mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (double)scale;
- (id)group;
- (id)textStyle;
- (void)setTextStyle:(id)a0;
- (int)pointCount;
- (int)pointIndex;
- (void)setPointIndex:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })logicalBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDiagram:(id)a0 group:(id)a1 drawingTheme:(id)a2;
- (id)diagram;
- (id)diagramOrientedBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maintainAspectRatio:(BOOL)a1;
- (id)presentationNameForPointType:(int)a0;
- (void)setPresentationName:(id)a0 forPointType:(int)a1;
- (id)defaultStyleLabelNameForPointType:(int)a0;
- (void)setDefaultStyleLabelName:(id)a0 forPointType:(int)a1;
- (void)setPointCount:(int)a0;
- (id)drawingTheme;

@end
