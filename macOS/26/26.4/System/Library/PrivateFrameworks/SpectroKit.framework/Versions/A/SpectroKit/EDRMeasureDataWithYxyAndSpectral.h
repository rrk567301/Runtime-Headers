@class NSString, EDRYxyType, EDRRGBType;

@interface EDRMeasureDataWithYxyAndSpectral : NSObject

@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *colorName;
@property (retain, nonatomic) EDRRGBType *rgb;
@property (copy, nonatomic) NSString *colorType;
@property (retain, nonatomic) EDRYxyType *Yxy;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;

@end
