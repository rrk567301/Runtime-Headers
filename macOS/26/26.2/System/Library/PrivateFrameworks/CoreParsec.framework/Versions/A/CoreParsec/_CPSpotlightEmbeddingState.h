@class NSData, NSString;

@interface _CPSpotlightEmbeddingState : PBCodable <_CPSpotlightEmbeddingState, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int embeddedPhotosAssetsCount;
@property (nonatomic) int totalPhotosAssetsCount;
@property (nonatomic) int embeddedPhotosAssetsPercentage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
