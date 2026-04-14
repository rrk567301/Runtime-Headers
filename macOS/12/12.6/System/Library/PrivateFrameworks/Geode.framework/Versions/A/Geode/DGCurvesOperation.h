@class NSArray, NSString, NSData, NSNumber;

@interface DGCurvesOperation : DGOperation <DGAutoCalculable> {
    NSData *_inputRGBData;
    NSData *_inputRedData;
    NSData *_inputGreenData;
    NSData *_inputBlueData;
    NSArray *_rgbCurvePoints;
    NSArray *_redCurvePoints;
    NSArray *_blueCurvePoints;
    NSArray *_greenCurvePoints;
    float _rgbValues[512];
    float _redValues[512];
    float _greenValues[512];
    float _blueValues[512];
}

@property (retain, nonatomic) NSNumber *inputGrayChoice;
@property (copy, nonatomic) NSArray *RGBCurvePoints;
@property (copy, nonatomic) NSArray *redCurvePoints;
@property (copy, nonatomic) NSArray *greenCurvePoints;
@property (copy, nonatomic) NSArray *blueCurvePoints;
@property (nonatomic) double gamma;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)_defaultCurveArray;
+ (id)autoValuesForBlackPoint:(double)a0 whitePoint:(double)a1;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)autoCalculatedInputKeys;

- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)defaultValueForInputKey:(id)a0;
- (float *)greenValues;
- (BOOL)isMigratable;
- (BOOL)requiresLegacyRender;
- (void)_applyAutoSettings:(id)a0;
- (id)_inputKeyForCurveType:(int)a0;
- (id)curvePoints:(int)a0;
- (void)_insertCurvePoint:(struct { double x0; double x1; })a0 select:(BOOL)a1 type:(int)a2;
- (long long)closestCurveIndexTo:(struct { double x0; double x1; })a0 type:(int)a1;
- (long long)whiteControlPointIndex:(int)a0;
- (void)_adjustCurvePoints:(id)a0 ofType:(int)a1 minDistance:(double)a2;
- (id)_findPreviousShownPoint:(unsigned long long)a0 type:(int)a1;
- (id)_findNextShownPoint:(unsigned long long)a0 type:(int)a1;
- (unsigned long long)shownCurvePointsCount:(int)a0;
- (id)shownCurvePointsAtIndex:(long long)a0 type:(int)a1;
- (float *)tableValues:(int)a0;
- (void)calculateCurveTable:(int)a0 tableSize:(long long)a1 table:(float *)a2 gamma:(double)a3;
- (void)calculateCurveTable:(int)a0 gamma:(double)a1;
- (float *)rgbValues;
- (float *)redValues;
- (float *)blueValues;
- (void)rebuildCurvePoints:(int)a0;
- (BOOL)reverseCurve_:(float)a0 withCurveTable:(float *)a1 reconstructedInput:(float *)a2;
- (void)resetCurve:(int)a0;
- (void)insertCurvePoint:(struct { double x0; double x1; })a0 select:(BOOL)a1 type:(int)a2;
- (id)firstControlPoint:(int)a0;
- (id)lastControlPoint:(int)a0;
- (id)whiteControlPoint:(int)a0;
- (id)closestControlPointTo:(struct { double x0; double x1; })a0 type:(int)a1;
- (void)setControlPointSelected:(BOOL)a0 atIndex:(long long)a1 type:(int)a2;
- (void)deselectControlPoints:(int)a0;
- (void)deleteSelectedPoints:(int)a0;
- (void)deleteControlPoint:(id)a0 type:(int)a1;
- (void)moveControlPointTo:(id)a0 newLocation:(struct { double x0; double x1; })a1 type:(int)a2;
- (id)moveControlPointTo:(id)a0 newLocation:(struct { double x0; double x1; })a1 type:(int)a2 minDistance:(double)a3;
- (void)offsetSelectedControlPoints:(struct { double x0; double x1; })a0 type:(int)a1 minDistance:(double)a2;
- (void)removeUserControlPoints:(int)a0;
- (void)deleteHiddenCurvePoints:(int)a0;
- (unsigned long long)countSelectedPoints:(int)a0;
- (unsigned long long)countHiddenPoints:(int)a0;
- (id)controlPointAtIndex:(long long)a0 type:(int)a1;
- (id)firstSelectedPoint:(int)a0;
- (id)selectedPointAtIndex:(int)a0 index:(long long)a1;
- (id)_parseArray:(id)a0;
- (BOOL)reverseCurveRGB:(float *)a0 withCurveTable:(float *)a1 reconstructedInput:(float *)a2;

@end
