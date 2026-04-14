@interface ADLKTStatistics : NSObject

@property (nonatomic) double meanIntensityDiffAtCoarsestScale;

- (id)dictionaryRepresentation;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;

@end
