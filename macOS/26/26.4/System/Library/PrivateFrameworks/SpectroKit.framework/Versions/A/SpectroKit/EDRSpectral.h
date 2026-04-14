@class EDRMeasureDataWithYxyAndSpectral, EDRSpectralHeader, NSArray;

@interface EDRSpectral : NSObject

@property (retain, nonatomic) EDRMeasureDataWithYxyAndSpectral *measureDataHeader;
@property (retain, nonatomic) EDRSpectralHeader *spectralDataHeader;
@property (retain, nonatomic) NSArray *spectralData;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)getAsSpectral:(id)a0;

@end
