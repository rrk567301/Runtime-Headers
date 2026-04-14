@class NSArray, NSUUID, NSDictionary, NSData, NSDate, NSString, NSSet;

@interface RTBluePOITile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDictionary *apToModelMapping;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSData *downloadKey;
@property (readonly, nonatomic) NSData *geoCacheInfo;
@property (readonly, nonatomic) unsigned long long geoTileKey;
@property (readonly, nonatomic) NSDictionary *hashedApToModelMapping;
@property (readonly, nonatomic) NSString *hashedApToModelMappingDataURL;
@property (readonly, nonatomic) NSData *hashSalt;
@property (readonly, nonatomic) NSDictionary *modelCalibrationParameters;
@property (readonly, nonatomic) NSSet *models;
@property (readonly, nonatomic) NSArray *modelURLs;
@property (readonly, nonatomic) NSSet *pointsOfInterest;
@property (readonly, nonatomic) unsigned long long singlePOIMuid;
@property (readonly, nonatomic) double size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 apToModelMapping:(id)a1 date:(id)a2 downloadKey:(id)a3 geoCacheInfo:(id)a4 geoTileKey:(unsigned long long)a5 hashedApToModelMapping:(id)a6 hashedApToModelMappingDataURL:(id)a7 hashSalt:(id)a8 modelCalibrationParameters:(id)a9 models:(id)a10 modelURLs:(id)a11 pointsOfInterest:(id)a12 singlePOIMuid:(unsigned long long)a13 size:(double)a14;

@end
