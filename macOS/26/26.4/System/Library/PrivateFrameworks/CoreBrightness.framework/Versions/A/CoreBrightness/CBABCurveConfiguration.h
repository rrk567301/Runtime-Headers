@class NSString, NSNumber;

@interface CBABCurveConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *maxBrightness;
@property (retain, nonatomic) NSNumber *minBrightness;
@property (nonatomic) BOOL isBuiltin;
@property (nonatomic) BOOL isEnergySaving;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;

@end
