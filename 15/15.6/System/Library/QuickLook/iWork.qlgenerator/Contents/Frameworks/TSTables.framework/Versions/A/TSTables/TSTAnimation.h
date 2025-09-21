@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {
    int mKind;
    struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *mCellRanges;
    unsigned long long mCellRangeCount;
    char mByColumn;
    char mByRow;
    char mByCell;
    char mByContent;
    char mByCellRange;
    char mByMissingCellRange;
    char mReverse;
}

@property (weak, nonatomic) TSTLayout *layout;
@property (readonly) unsigned long long stageCount;
@property (readonly) unsigned long long stage;
@property (readonly) char final;
@property char showsTableChrome;
@property char showsOverlayLayers;
@property char expandBackgroundFill;
@property char drawsBlackAndWhite;
@property (readonly) unsigned long long cellRangeCount;
@property (readonly) char drawTableName;
@property (readonly) char drawTableBackground;
@property (readonly) char drawCellBackground;
@property (readonly) char drawCellContent;
@property (readonly) char clipStrokes;
@property (readonly) char drawStrokes;
@property (readonly) char enabled;

+ (id)textureDeliveryStylesLocalized:(char)a0;
+ (char)deliveryStyleSupportedForExport:(unsigned long long)a0;
+ (id)newAnimationWithLayout:(id)a0 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)newAnimationWithLayout:(id)a0 andDeliveryStyle:(unsigned long long)a1;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;
+ (unsigned long long)p_NumberOfCellBuilds:(id)a0;
+ (unsigned long long)p_NumberOfColumnBuilds:(id)a0;
+ (unsigned long long)p_NumberOfRowBuilds:(id)a0;
+ (unsigned long long)p_stageCountForProvider:(id)a0 withAnimationKind:(int)a1;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)a0 tableProvider:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)clearCellRanges;
- (void)addCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })cellRangeAtIndex:(unsigned long long)a0;
- (void)setStage:(unsigned long long)a0 andFinal:(char)a1;
- (char)isHidingContentOfCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0;

@end
