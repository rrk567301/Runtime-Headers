@class NSString;

@interface TUEmergencyMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *assetId;
@property (nonatomic) long long emergencyMediaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetId:(id)a0;
- (id)initWithAssetId:(id)a0 mediaType:(long long)a1;
- (id)initWithMediaItem:(id)a0;
- (char)isEqualToMediaItem:(id)a0;

@end
