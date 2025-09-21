@class STTranscriberMultisegmentResult, STTranscriberSingleSegmentResult;

@interface SFTranscriberResult : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (readonly, copy, nonatomic) STTranscriberMultisegmentResult *normalizedTranscriberMultisegmentResult;
@property (readonly, copy, nonatomic) STTranscriberMultisegmentResult *contextualizedTranscriberMultisegmentResult;
@property (readonly, copy, nonatomic) STTranscriberSingleSegmentResult *normalizedTranscriberSingleSegmentResult;
@property (readonly, copy, nonatomic) STTranscriberSingleSegmentResult *contextualizedTranscriberSingleSegmentResult;

- (void).cxx_destruct;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 contextualizedTranscriberMultisegmentResult:(id)a1;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 normalizedTranscriberMultisegmentResult:(id)a1 contextualizedTranscriberMultisegmentResult:(id)a2;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 normalizedTranscriberSingleSegmentResult:(id)a1 contextualizedTranscriberSingleSegmentResult:(id)a2;

@end
