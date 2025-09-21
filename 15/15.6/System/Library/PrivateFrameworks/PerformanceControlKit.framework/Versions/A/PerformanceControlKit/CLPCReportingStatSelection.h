@interface CLPCReportingStatSelection : NSObject {
    struct array<bool, 25UL> { BOOL __elems_[25]; } selection;
}

- (id)init;
- (void)enumerate:(id /* block */)a0;
- (void)deselectAll;
- (void)selectAll;
- (char)deselectStat:(unsigned long long)a0 error:(id *)a1;
- (char)deselectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)isSelected:(unsigned long long)a0 error:(id *)a1;
- (char)selectStat:(unsigned long long)a0 error:(id *)a1;
- (char)selectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;

@end
