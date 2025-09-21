@interface ADLKTStatistics : NSObject

@property (nonatomic) double meanIntensityDiffAtCoarsestScale;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)dictionaryRepresentation;

@end
