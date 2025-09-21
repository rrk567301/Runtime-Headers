@class TSTTableInfo, NSPointerArray;
@protocol TSTTableInternalGeometryProviding, TSTTableStrokeProviding, TSTTableHiddenRowColumnProviding;

@interface TSTStrokeDefaultVendor : NSObject

@property (weak, nonatomic) id<TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding> tableProvider;
@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) char isValid;
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerMap;
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerStackMap;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerSideBorderColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerColumnSeparatorColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footerColumnSeparatorColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bodySideBorderColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } topBorderRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bottomBorderRowRange;
@property (weak, nonatomic) id<TSTTableStrokeProviding> strokeProvider;

- (void).cxx_destruct;
- (void)invalidate;
- (int)validateChangeDescriptors:(id)a0;
- (void)enumerateLayerAndStackForGridColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateLayerAndStackForGridRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithStrokeProvider:(id)a0 tableProvider:(id)a1 tableInfo:(id)a2;
- (char)p_headerColumnSeparatorColumnRangeIsValid;
- (char)p_headerRowSeparatorRowRangeIsValid;
- (unsigned long long)p_strokeTypeForColumn:(unsigned int)a0;
- (unsigned long long)p_strokeTypeForRow:(unsigned int)a0;
- (void)p_updateStrokeLayer:(id)a0 forColumnStrokeType:(unsigned long long)a1;
- (void)p_updateStrokeLayer:(id)a0 forRowStrokeType:(unsigned long long)a1;
- (id)strokeLayerForColumn:(unsigned int)a0;
- (id)strokeLayerForRow:(unsigned int)a0;
- (id)strokeLayerForStrokeType:(unsigned long long)a0;
- (id)strokeLayerStackForColumn:(unsigned int)a0;
- (id)strokeLayerStackForRow:(unsigned int)a0;
- (id)strokeLayerStackForStrokeType:(unsigned long long)a0;
- (char)validateGeometry;

@end
