@interface RTLearnedLocationReconcilerModel : NSObject

- (double)_weightWithDeviceWeight:(double)a0 visitsPercentage:(double)a1 transitionsPercentage:(double)a2 semanticLabel:(char)a3 firstVisit:(char)a4 earliestTransition:(char)a5 rawLocationCount:(unsigned long long)a6;
- (double)scoreForDeviceClass:(id)a0;
- (double)weightForVisit:(id)a0 modelContext:(id)a1;

@end
