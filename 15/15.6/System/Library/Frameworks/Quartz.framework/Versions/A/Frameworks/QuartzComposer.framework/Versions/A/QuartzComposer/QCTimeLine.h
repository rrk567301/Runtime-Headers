@class GFList;

@interface QCTimeLine : QCPatch {
    GFList *_timeLines;
    char _curveHullsEnabled;
    char _legendHidden;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)deselectAll;
- (void)removeTimeLine:(long long)a0;
- (void)setSerializedValue:(id)a0 forStateKey:(id)a1;
- (id)_copyTimeLines;
- (id)_createOutputPortForTimeLineIndex:(long long)a0;
- (char)timeLineActive:(long long)a0;
- (id)activeTimeLineIndices;
- (long long)addKeyFrameAtTime:(double)a0 value:(double)a1 toTimeLine:(long long)a2 preserveCurve:(char)a3;
- (long long)baseKeyFrameIndexAtTime:(double)a0 inTimeLine:(long long)a1;
- (void)cacheKeyFrames;
- (id)colorForTimeLine:(long long)a0;
- (char)controlsFixedForKeyFrame:(long long)a0 inTimeLine:(long long)a1;
- (long long)createTimeLineWithTime:(double)a0 value:(double)a1;
- (char)curveHullsEnabled;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)identifierForTimeLine:(long long)a0;
- (id)inactiveTimeLineIndices;
- (char)keyFrameSelected:(long long)a0 inTimeLine:(long long)a1;
- (unsigned long long)keyFramesCountForTimeLine:(long long)a0;
- (char)legendHidden;
- (struct CGPoint { double x0; double x1; })locationOfControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)maxTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (unsigned long long)maxTimeLinesCount;
- (double)maxValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)minTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (unsigned long long)minTimeLinesCount;
- (double)minValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (long long)offsetControlType:(int)a0 byTime:(double)a1 byValue:(double)a2 keyFrame:(long long)a3 inTimeLine:(long long)a4;
- (char)performAction:(SEL)a0 onSelectedTimeLines:(char)a1 withSelectedKeyFrames:(char)a2 object:(id)a3 context:(void *)a4;
- (void)purgeKeyFrameCaches;
- (void)removeKeyFrame:(long long)a0 fromTimeLine:(long long)a1;
- (id)serializedValueForStateKey:(id)a0;
- (void)setActive:(char)a0 forTimeLine:(long long)a1 extendSelection:(char)a2;
- (void)setColor:(id)a0 forTimeLine:(long long)a1;
- (void)setControlsFixed:(char)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2;
- (void)setCurveHullsEnabled:(char)a0;
- (void)setIdentifier:(id)a0 forTimeLine:(long long)a1;
- (void)setLegendHidden:(char)a0;
- (void)setSelected:(char)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2 extendSelection:(char)a3;
- (void)setSelected:(char)a0 ifInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTime:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (void)setTimeLines:(id)a0;
- (void)setValue:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (void)setVisibility:(char)a0 forTimeLine:(long long)a1;
- (double)timeForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (id)timeLines;
- (unsigned long long)timeLinesCount;
- (double)valueForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (char)visibilityForTimeLine:(long long)a0;

@end
