@class NSString, NSArray;

@interface STTranscriberSingleSegmentResult : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } resultsFinalizationTime;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) double bestTextSegmentConfidence;
@property (readonly, copy, nonatomic) NSArray *alternatives;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIsFinal:(BOOL)a0 resultsFinalizationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 text:(id)a2 bestTextSegmentConfidence:(double)a3 alternatives:(id)a4;

@end
