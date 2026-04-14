@interface SHContinuityTrackerResult : NSObject

@property (readonly) double queryStart;
@property (readonly) double queryEnd;
@property (readonly) double referenceStart;
@property (readonly) double referenceEnd;
@property (readonly) float alignmentConfidence;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithQueryAlignment:(id)a0 referenceAlignment:(id)a1 alignmentConfidence:(float)a2;

@end
