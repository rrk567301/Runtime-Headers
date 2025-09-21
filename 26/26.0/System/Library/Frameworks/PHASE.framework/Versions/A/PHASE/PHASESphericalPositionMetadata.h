@class NSObject;

@interface PHASESphericalPositionMetadata : PHASEAngularPositionMetadata

@property (class, readonly, nonatomic) float minimumDistance;
@property (class, readonly, nonatomic) float maximumDistance;
@property (class, readonly, nonatomic) float defaultDistance;

@property (nonatomic) float internalDistance;
@property (retain, nonatomic) NSObject *internalDistanceLock;
@property (nonatomic) float distance;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)floatsAreEqual:(float)a0 b:(float)a1 eps:(float)a2;
- (id)initWithAzimuth:(float)a0 elevation:(float)a1;
- (id)initWithAzimuth:(float)a0 elevation:(float)a1 distance:(float)a2;

@end
