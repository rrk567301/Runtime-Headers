@class NSObject, NSString, PLUniformTypeIdentifier;
@protocol PLResourceDataStore, PLResourceDataStoreKey;

@interface PHResourceChooserListResourceInfo : NSObject <PHRecyclableObject, PLResourceIdentity, NSCopying>

@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) float resourceScale;
@property (readonly, nonatomic) int qualitySortValue;
@property (readonly, nonatomic) NSObject<PLResourceDataStore> *store;
@property (readonly, nonatomic) NSObject<PLResourceDataStoreKey> *dataStoreKey;
@property (readonly, nonatomic) short localAvailabilityTarget;
@property (readonly, nonatomic) char isDerivative;
@property (readonly, nonatomic) char isPrimaryFormat;
@property (readonly, nonatomic) char canDownload;
@property (readonly, nonatomic) char locallyGeneratableOnDemand;
@property (readonly, nonatomic) char isHintBased;
@property (readonly, nonatomic) short localAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isOriginalResource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })approximateSizeFromAsset:(id)a0;
- (id)initWithResourceType:(unsigned int)a0 recipeID:(unsigned int)a1 resourceVersion:(unsigned int)a2 resourceScale:(double)a3 qualitySort:(int)a4 isDerivative:(char)a5 isPrimaryFormat:(char)a6 canDownload:(char)a7 isHintBased:(char)a8 uti:(id)a9 store:(id)a10 key:(id)a11 localAvailabilityTarget:(short)a12;
- (void)populateWithResourceType:(unsigned int)a0 recipeID:(unsigned int)a1 resourceVersion:(unsigned int)a2 resourceScale:(double)a3 qualitySort:(int)a4 isDerivative:(char)a5 isPrimaryFormat:(char)a6 canDownload:(char)a7 isHintBased:(char)a8 uti:(id)a9 store:(id)a10 key:(id)a11 localAvailabilityTarget:(short)a12;

@end
