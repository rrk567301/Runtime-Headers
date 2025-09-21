@interface GESSAlgSDSmoothReport : GESSAlgReport

@property double totalTime;
@property double normalSmoothTime;
@property double prepareMatrixTime;
@property double solveLinearSystemTime;
@property unsigned int numOfNonZeros;

- (id)init;

@end
