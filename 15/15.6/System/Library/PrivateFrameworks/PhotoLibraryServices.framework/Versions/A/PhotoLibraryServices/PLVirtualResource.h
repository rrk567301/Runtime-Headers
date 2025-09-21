@class NSString, NSURL, NSDate, PLUniformTypeIdentifier;
@protocol PLResourceDataStore, PLResourceDataStoreKey, PLAssetID;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel> {
    char _isMarkedFullSize;
    char _isLosslessEncoded;
    long long _assetWidth;
    long long _assetHeight;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) id<PLResourceDataStore> dataStore;
@property (nonatomic) long long dataStoreSubtype;
@property (retain, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) float scale;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) NSString *codecFourCharCodeName;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) long long orientedWidth;
@property (readonly, nonatomic) long long orientedHeight;
@property (readonly, copy, nonatomic) id<PLAssetID> assetID;
@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) short localAvailability;
@property (readonly, nonatomic) short localAvailabilityTarget;
@property (readonly, nonatomic) short remoteAvailabilityTarget;
@property (readonly, nonatomic) int qualitySortValue;
@property (readonly, nonatomic) long long dataLength;
@property (readonly, nonatomic) long long estimatedDataLength;
@property (readonly, nonatomic) short trashedState;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) char isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isVirtual;
- (long long)dataLength;
- (long long)estimatedDataLength;
- (unsigned long long)cplType;
- (char)isDerivative;
- (char)isInCloud;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (int)qualitySortValue;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (char)isPlayableVideo;
- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3;
- (id)initWithRecipe:(id)a0 forAsset:(id)a1;
- (char)isDefaultOrientation;
- (id)photosCTLJSONDict;
- (id)singleLineDescription;
- (short)utiConformanceHint;

@end
