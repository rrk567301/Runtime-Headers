@class NSString;
@protocol PLResourceDataStore, PLAssetID, PLResourceDataStoreKey;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying>

@property (retain, nonatomic) id<PLAssetID> assetID;
@property (retain, nonatomic) id<PLResourceDataStore> dataStore;
@property (retain, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) char keyIsHintBased;
@property (nonatomic) char isDegraded;
@property (nonatomic) char isPrimaryFormat;
@property (nonatomic) char isDerivedFromDeferredPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;

@end
