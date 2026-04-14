@class NSObject;

@interface PHASEAngularPositionMetadata : NSObject

@property (class, readonly, nonatomic) float epsilon;
@property (class, readonly, nonatomic) float minimumAzimuth;
@property (class, readonly, nonatomic) float maximumAzimuth;
@property (class, readonly, nonatomic) float defaultAzimuth;
@property (class, readonly, nonatomic) float minimumElevation;
@property (class, readonly, nonatomic) float maximumElevation;
@property (class, readonly, nonatomic) float defaultElevation;

@property (nonatomic) float internalAzimuth;
@property (nonatomic) float internalElevation;
@property (retain, nonatomic) NSObject *internalAzimuthLock;
@property (retain, nonatomic) NSObject *internalElevationLock;
@property (nonatomic) float azimuth;
@property (nonatomic) float elevation;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)floatsAreEqual:(float)a0 b:(float)a1 eps:(float)a2;
- (id)initWithAzimuth:(float)a0 elevation:(float)a1;

@end
