@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    long long _interpolationMode;
    long long _repeatMode;
    struct SKCKeyframeSequence { int x0; int x1; long long x2; long long x3; float *x4; float *x5; } *_cKeyframeSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long interpolationMode;
@property (nonatomic) long long repeatMode;

- (id)copy;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (Class)_valueClass;
- (id)sampleAtTime:(double)a0;
- (void)removeAllKeyframes;
- (id)initWithKeyframeValues:(id)a0 times:(id)a1;
- (void)addKeyframeValue:(id)a0 time:(double)a1;
- (void)removeLastKeyframe;
- (void)removeKeyframeAtIndex:(unsigned long long)a0;
- (void)setKeyframeValue:(id)a0 forIndex:(unsigned long long)a1;
- (void)setKeyframeTime:(double)a0 forIndex:(unsigned long long)a1;
- (void)setKeyframeValue:(id)a0 time:(double)a1 forIndex:(unsigned long long)a2;
- (id)getKeyframeValueForIndex:(unsigned long long)a0;
- (struct SKCKeyframeSequence { int x0; int x1; long long x2; long long x3; float *x4; float *x5; } *)_createSKCKeyframeSequence;
- (void)_dirtySKCKeyframeSequence;
- (double)getKeyframeTimeForIndex:(unsigned long long)a0;
- (BOOL)isEqualToSequence:(id)a0;

@end
