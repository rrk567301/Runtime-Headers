@class NSMutableArray;

@interface _PSCluster : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableArray *convexHull;

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsPoint:(id)a0;
- (id)pointAtIndex:(unsigned long long)a0;
- (void)computeConvexHull;
- (void)addPointToCluster:(id)a0;
- (int)orientationOfPoints:(id)a0 and:(id)a1 and:(id)a2;
- (long long)compareByAnglePoint:(id)a0 andPoint:(id)a1 withRef:(id)a2;
- (void)sortArray:(id)a0;
- (id)initWithPoints:(id)a0 andHull:(id)a1;
- (void)clearCluster;

@end
