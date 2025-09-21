@class NSArray, NSObject, PHASEAngularPositionMetadata;

@interface PHASEPlaneWaveMetadata : NSObject

@property (class, readonly, nonatomic) float epsilon;
@property (class, readonly, nonatomic) float minimumDelayTime;
@property (class, readonly, nonatomic) float maximumDelayTime;
@property (class, readonly, nonatomic) float defaultDelayTime;
@property (class, readonly, nonatomic) BOOL defaultInvertPolarity;

@property (readonly, nonatomic) unsigned long long subbandCount;
@property (nonatomic) float internalDelayTime;
@property (retain, nonatomic) PHASEAngularPositionMetadata *internalDirection;
@property (nonatomic) BOOL internalInvertPolarity;
@property (retain, nonatomic) NSArray *internalSubbandGains;
@property (retain, nonatomic) NSObject *internalDelayTimeLock;
@property (retain, nonatomic) NSObject *internalDirectionLock;
@property (retain, nonatomic) NSObject *internalInvertPolarityLock;
@property (retain, nonatomic) NSObject *internalSubbandGainsLock;
@property (nonatomic) float delayTime;
@property (retain, nonatomic) PHASEAngularPositionMetadata *direction;
@property (nonatomic) BOOL invertPolarity;
@property (retain, nonatomic) NSArray *subbandGains;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)floatsAreEqual:(float)a0 b:(float)a1 eps:(float)a2;
- (id)initWithSubbandCount:(unsigned long long)a0;

@end
