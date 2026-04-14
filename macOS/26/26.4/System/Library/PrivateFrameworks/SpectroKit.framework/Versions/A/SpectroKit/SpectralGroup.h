@class NSArray, NSDictionary;

@interface SpectralGroup : NSObject

@property (retain, nonatomic) NSArray *orderedKeys;
@property (retain, nonatomic) NSDictionary *spectralData;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)getFirst;
- (unsigned long long)getColumns;
- (unsigned long long)getRows;
- (void)dumpToCSVWithFilename:(id)a0;
- (id)getBasisMatrixWithRequiredKeys:(id)a0 transpose:(BOOL)a1 targetShape:(id)a2;
- (id)initWithSpectralData:(id)a0;
- (id)linearCombineWithTriColor:(id)a0;
- (id)matrixMultiplyWithSpectra:(id)a0;
- (id)project:(id)a0;
- (id)solveCoefficientsWithSpectral:(id)a0;

@end
