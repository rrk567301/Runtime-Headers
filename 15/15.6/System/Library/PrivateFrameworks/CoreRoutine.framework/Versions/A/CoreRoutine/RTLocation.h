@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalUncertainty;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalUncertainty;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) unsigned long long sourceAccuracy;

+ (id)sourceAccuracyToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setUncertainty:(double)a0;
- (id)outputToDictionaryReadableDate:(char)a0;
- (id)coordinateToString;
- (id)initWithFirstJSONDictionary:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 altitude:(double)a3 verticalUncertainty:(double)a4 date:(id)a5 referenceFrame:(int)a6 speed:(double)a7;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 altitude:(double)a3 verticalUncertainty:(double)a4 date:(id)a5 referenceFrame:(int)a6 speed:(double)a7 sourceAccuracy:(unsigned long long)a8;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3 referenceFrame:(int)a4;
- (char)isEqualToLocation:(id)a0;
- (id)outputToDictionary;
- (id)outputToFirstJSONDictionary;

@end
