@class PHASESphericalPositionMetadata, NSArray, NSMutableArray, NSObject;

@interface PHASEDirectionalMetadata : NSObject

@property (class, readonly, nonatomic) long long defaultCategory;
@property (class, readonly, nonatomic) long long defaultSynthesisPreference;
@property (class, readonly, nonatomic) float minimumFrequency;
@property (class, readonly, nonatomic) float maximumFrequency;
@property (class, readonly, nonatomic) float defaultFrequency;

@property (readonly, nonatomic) NSArray *internalSubbandFrequencies;
@property (nonatomic) long long internalCategory;
@property (nonatomic) long long internalSynthesisPreference;
@property (retain, nonatomic) PHASESphericalPositionMetadata *internalPosition;
@property (retain, nonatomic) NSMutableArray *internalPlaneWaves;
@property (retain, nonatomic) NSObject *internalCategoryLock;
@property (retain, nonatomic) NSObject *internalSynthesisPreferenceLock;
@property (retain, nonatomic) NSObject *internalPositionLock;
@property (nonatomic) long long category;
@property (nonatomic) long long synthesisPreference;
@property (retain, nonatomic) PHASESphericalPositionMetadata *position;
@property (readonly, nonatomic) NSArray *subbandFrequencies;
@property (retain, nonatomic) NSArray *planeWaves;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubbandFrequencyLayout:(long long)a0;
- (void)replacePlaneWave:(id)a0 withPlaneWave:(id)a1;
- (void)addPlaneWave:(id)a0;
- (id)initWithSubbandFrequencies:(id)a0;
- (void)removePlaneWave:(id)a0;
- (void)validateSubbandFrequencies:(id)a0;

@end
