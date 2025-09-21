@class NSString;

@interface CHEmergencyMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *assetId;
@property (nonatomic) long long emergencyMediaType;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetId:(id)a0;
- (id)initWithAssetId:(id)a0 mediaType:(long long)a1;
- (id)initWithMediaItem:(id)a0;
- (BOOL)isEqualToMediaItem:(id)a0;
- (id)getDictionary;

@end
