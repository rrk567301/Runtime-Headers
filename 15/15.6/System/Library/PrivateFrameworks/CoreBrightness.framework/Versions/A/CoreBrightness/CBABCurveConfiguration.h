@class NSString, NSNumber;

@interface CBABCurveConfiguration : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *maxBrightness;
@property (retain, nonatomic) NSNumber *minBrightness;
@property (nonatomic) char isBuiltin;
@property (nonatomic) char isEnergySaving;

- (void)dealloc;
- (id)description;

@end
