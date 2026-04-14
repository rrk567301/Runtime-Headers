@class NSUUID, NSDictionary, NSData, NSDate, NSSet, NSArray;

@interface RTBluePOITile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDictionary *apToModelMapping;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSData *downloadKey;
@property (readonly, nonatomic) NSData *geoCacheInfo;
@property (readonly, nonatomic) unsigned long long geoTileKey;
@property (readonly, nonatomic) NSDictionary *hashedApToModelMapping;
@property (readonly, nonatomic) NSData *hashSalt;
@property (readonly, nonatomic) NSDictionary *modelCalibrationParameters;
@property (readonly, nonatomic) NSSet *models;
@property (readonly, nonatomic) NSArray *modelURLs;
@property (readonly, nonatomic) NSSet *pointsOfInterest;
@property (readonly, nonatomic) unsigned long long singlePOIMuid;
@property (readonly, nonatomic) double size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 apToModelMapping:(id)a1 date:(id)a2 downloadKey:(id)a3 geoCacheInfo:(id)a4 geoTileKey:(unsigned long long)a5 hashedApToModelMapping:(id)a6 hashSalt:(id)a7 modelCalibrationParameters:(id)a8 models:(id)a9 modelURLs:(id)a10 pointsOfInterest:(id)a11 singlePOIMuid:(unsigned long long)a12 size:(double)a13;

@end
