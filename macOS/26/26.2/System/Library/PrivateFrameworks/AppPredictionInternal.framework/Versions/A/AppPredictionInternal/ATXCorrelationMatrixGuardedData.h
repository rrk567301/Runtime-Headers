@class NSMutableDictionary;

@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}

- (void).cxx_destruct;
- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (id)init;

@end
