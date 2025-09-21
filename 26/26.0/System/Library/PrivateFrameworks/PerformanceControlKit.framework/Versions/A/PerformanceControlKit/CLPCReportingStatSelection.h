@interface CLPCReportingStatSelection : NSObject {
    struct array<bool, 40UL> { BOOL __elems_[40]; } selection;
}

- (void)selectAll;
- (void)enumerate:(id /* block */)a0;
- (id)init;
- (void)deselectAll;
- (BOOL)selectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)selectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)isSelected:(unsigned long long)a0 error:(id *)a1;

@end
