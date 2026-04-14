@class GFList;

@interface QCTimeLine : QCPatch {
    GFList *_timeLines;
    BOOL _curveHullsEnabled;
    BOOL _legendHidden;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)deselectAll;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)serializedValueForStateKey:(id)a0;
- (void)setSerializedValue:(id)a0 forStateKey:(id)a1;
- (void)cacheKeyFrames;
- (long long)createTimeLineWithTime:(double)a0 value:(double)a1;
- (id)_createOutputPortForTimeLineIndex:(long long)a0;
- (id)_copyTimeLines;
- (void)setActive:(BOOL)a0 forTimeLine:(long long)a1 extendSelection:(BOOL)a2;
- (void)setSelected:(BOOL)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2 extendSelection:(BOOL)a3;
- (unsigned long long)minTimeLinesCount;
- (unsigned long long)maxTimeLinesCount;
- (unsigned long long)timeLinesCount;
- (id)timeLines;
- (void)setTimeLines:(id)a0;
- (unsigned long long)keyFramesCountForTimeLine:(long long)a0;
- (void)removeTimeLine:(long long)a0;
- (long long)addKeyFrameAtTime:(double)a0 value:(double)a1 toTimeLine:(long long)a2 preserveCurve:(BOOL)a3;
- (long long)baseKeyFrameIndexAtTime:(double)a0 inTimeLine:(long long)a1;
- (void)removeKeyFrame:(long long)a0 fromTimeLine:(long long)a1;
- (double)timeForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (double)valueForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (void)setTime:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (void)setValue:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (long long)offsetControlType:(int)a0 byTime:(double)a1 byValue:(double)a2 keyFrame:(long long)a3 inTimeLine:(long long)a4;
- (struct CGPoint { double x0; double x1; })locationOfControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)minTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)maxTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)minValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)maxValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (void)purgeKeyFrameCaches;
- (BOOL)legendHidden;
- (void)setLegendHidden:(BOOL)a0;
- (BOOL)curveHullsEnabled;
- (void)setCurveHullsEnabled:(BOOL)a0;
- (id)identifierForTimeLine:(long long)a0;
- (id)colorForTimeLine:(long long)a0;
- (BOOL)visibilityForTimeLine:(long long)a0;
- (void)setIdentifier:(id)a0 forTimeLine:(long long)a1;
- (void)setColor:(id)a0 forTimeLine:(long long)a1;
- (void)setVisibility:(BOOL)a0 forTimeLine:(long long)a1;
- (id)activeTimeLineIndices;
- (id)inactiveTimeLineIndices;
- (BOOL)timeLineActive:(long long)a0;
- (BOOL)keyFrameSelected:(long long)a0 inTimeLine:(long long)a1;
- (void)setSelected:(BOOL)a0 ifInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)controlsFixedForKeyFrame:(long long)a0 inTimeLine:(long long)a1;
- (void)setControlsFixed:(BOOL)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2;
- (BOOL)performAction:(SEL)a0 onSelectedTimeLines:(BOOL)a1 withSelectedKeyFrames:(BOOL)a2 object:(id)a3 context:(void *)a4;

@end
