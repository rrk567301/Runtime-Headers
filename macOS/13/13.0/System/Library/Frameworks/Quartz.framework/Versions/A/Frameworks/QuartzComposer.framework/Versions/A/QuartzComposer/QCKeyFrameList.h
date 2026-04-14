@class NSString, NSMutableData, QCNumberPort, NSColor;

@interface QCKeyFrameList : NSObject {
    NSString *_identifier;
    NSColor *_color;
    BOOL _visible;
    unsigned long long _numKeyFrames;
    NSMutableData *_keyFrames;
    NSMutableData *_keyFramesCache;
    BOOL _active;
    unsigned long long _portNumber;
    NSString *_portKey;
    QCNumberPort *_port;
}

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifier;
- (id)port;
- (void)setIdentifier:(id)a0;
- (BOOL)active;
- (void)setPort:(id)a0;
- (id)color;
- (void)setColor:(id)a0;
- (BOOL)isVisible;
- (void)setActive:(BOOL)a0;
- (void)setVisible:(BOOL)a0;
- (unsigned long long)portNumber;
- (void)setPortNumber:(unsigned long long)a0;
- (id)initWithKeyFrame:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { BOOL x0; struct { double x0; double x1; } x1[4]; double x2; double x3; double x4; double x5; double x6; double x7; } x3; BOOL x4; BOOL x5; })a0;
- (id)initWithKeyFrameList:(id)a0;
- (BOOL)executeAtTime:(double)a0;
- (unsigned long long)keyFramesCount;
- (long long)baseKeyFrameIndexAtTime:(double)a0 searchBackward:(BOOL)a1;
- (long long)addKeyFrameAtTime:(double)a0 value:(double)a1 preserveCurve:(BOOL)a2;
- (void)removeKeyFrame:(long long)a0;
- (double)timeForKeyFrame:(long long)a0 controlType:(int)a1;
- (double)valueForKeyFrame:(long long)a0 controlType:(int)a1;
- (void)setTime:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2;
- (void)setValue:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2;
- (long long)offsetControlType:(int)a0 byTime:(double)a1 byValue:(double)a2 keyFrame:(long long)a3;
- (struct CGPoint { double x0; double x1; })locationOfControlType:(int)a0 keyFrame:(long long)a1;
- (double)minTimeForControlType:(int)a0 keyFrame:(long long)a1;
- (double)maxTimeForControlType:(int)a0 keyFrame:(long long)a1;
- (double)minValueForControlType:(int)a0 keyFrame:(long long)a1;
- (double)maxValueForControlType:(int)a0 keyFrame:(long long)a1;
- (void)cacheKeyFrames;
- (void)purgeKeyFrameCache;
- (BOOL)keyFrameSelected:(long long)a0;
- (void)setSelected:(BOOL)a0 forKeyFrame:(long long)a1 extendSelection:(BOOL)a2;
- (BOOL)controlsFixedForKeyFrame:(long long)a0;
- (void)setControlsFixed:(BOOL)a0 forKeyFrame:(long long)a1;
- (id)portKey;
- (void)setPortKey:(id)a0;
- (id)_keyFrames;
- (id)_keyFramesCache;
- (void)_appendKeyFrame:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { BOOL x0; struct { double x0; double x1; } x1[4]; double x2; double x3; double x4; double x5; double x6; double x7; } x3; BOOL x4; BOOL x5; })a0;
- (long long)_insertKeyFrame:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { BOOL x0; struct { double x0; double x1; } x1[4]; double x2; double x3; double x4; double x5; double x6; double x7; } x3; BOOL x4; BOOL x5; })a0;
- (void)_invalidateBezierPathsForKeyFrame:(long long)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { BOOL x0; struct { double x0; double x1; } x1[4]; double x2; double x3; double x4; double x5; double x6; double x7; } x3; BOOL x4; BOOL x5; } *)_keyFrameAtIndex:(long long)a0;

@end
