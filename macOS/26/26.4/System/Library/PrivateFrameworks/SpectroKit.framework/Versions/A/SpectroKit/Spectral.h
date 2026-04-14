@class NSArray;

@interface Spectral : NSObject

@property (retain, nonatomic) NSArray *data;
@property (nonatomic) double startWavelength;
@property (nonatomic) double endWavelength;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double stepSize;

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (void)print;
- (unsigned long long)getColumns;
- (double)getHighestValue;
- (unsigned long long)getRows;
- (id)createNormalizeWithHighestValue:(id)a0;
- (id)createWeightedWithSpectra:(id)a0;
- (void)dumpToCSVWithFilename:(id)a0;
- (double)getLowestValue;
- (double)getValueAtWavelength:(double)a0;
- (id)initWithParam:(id)a0;
- (double)integrateWithSpectra:(id)a0;
- (void)setDataWithParam:(id)a0;
- (BOOL)validateSpectral:(id)a0;

@end
