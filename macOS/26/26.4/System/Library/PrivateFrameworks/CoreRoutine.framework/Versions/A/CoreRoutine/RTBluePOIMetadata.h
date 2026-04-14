@class NSUUID, NSArray, NSData, NSDictionary;

@interface RTBluePOIMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *categoryDenyList;
@property (readonly, nonatomic) NSData *geoCacheInfo;
@property (readonly, nonatomic) NSDictionary *modelCalibrationParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 categoryDenyList:(id)a1 geoCacheInfo:(id)a2 modelCalibrationParameters:(id)a3;

@end
