@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;

+ (id)seriesType;
+ (id)selectionPathTypeWithType:(id)a0 name:(id)a1;
+ (id)chartTitleType;
+ (id)chartDataSetNameType;
+ (id)valueAxisType;
+ (id)categoryAxisType;
+ (id)axisTitleType;
+ (id)axisLabelsType;
+ (id)seriesEditModeType;
+ (id)seriesLabelType;
+ (id)seriesSymbolType;
+ (id)seriesValueLabelType;
+ (id)legendType;
+ (id)legendSeriesNameType;
+ (id)legendTrendLineNameType;
+ (id)errorBarType;
+ (id)trendLineType;
+ (id)trendLineEquationType;
+ (id)trendLineR2Type;
+ (id)chartBodyType;
+ (id)axisLineType;
+ (id)gridLineType;
+ (id)referenceLineType;
+ (id)referenceLineLabelType;
+ (id)referenceLineValueLabelType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (BOOL)canApplyParagraphStyle;
- (BOOL)canApplyShapeStyle;
- (BOOL)canApplyChartStyleWithDescription:(id)a0;

@end
