@interface PIEDataVector : NSObject

@property (readonly) double *data;
@property (readonly) unsigned long long length;
@property (retain) id userInfo;

+ (id)meanVector:(id)a0;
+ (id)vectorWithLength:(unsigned long long)a0;
+ (id)vectorWithArray:(id)a0;
+ (id)varianceVector:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithArray:(id)a0;
- (id)array;
- (id)addVector:(id)a0;
- (id)serialize;
- (id)initWithData:(double *)a0 length:(unsigned long long)a1;
- (id)normalize;
- (double)magnitude;
- (id)append:(id)a0;
- (id)initWithDataLength:(unsigned long long)a0;
- (id)initWithSerializedData:(id)a0;
- (unsigned long long)sumIntoFrom:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (id)multiply:(double)a0;
- (id)squareElements;
- (void)fillWithValue:(double)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (double)dotProduct:(id)a0;
- (double)magnitudeSquared;
- (double)distanceL2SquaredFrom:(id)a0;
- (id)negated;
- (void)fillWithValue:(double)a0;
- (unsigned long long)copyIntoFrom:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (double)cosineSimilarityWith:(id)a0;
- (double)intersectionDistanceWith:(id)a0;
- (double)bhattacharyyaDistanceWith:(id)a0;
- (double)chiSquareSimilarityWith:(id)a0;
- (double)distanceL1From:(id)a0;
- (double)distanceL2From:(id)a0;

@end
