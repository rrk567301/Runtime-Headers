@class NSString, NSDictionary, NSData, NSNumber;

@interface SFSpotlightEmbeddingState : NSObject <SFSpotlightEmbeddingState, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *embeddedPhotosAssetsCount;
@property (copy, nonatomic) NSNumber *totalPhotosAssetsCount;
@property (copy, nonatomic) NSNumber *embeddedPhotosAssetsPercentage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
