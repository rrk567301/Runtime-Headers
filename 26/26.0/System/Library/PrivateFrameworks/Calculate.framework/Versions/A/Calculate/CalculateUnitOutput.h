@class UnitsInfo, NSLocale;

@interface CalculateUnitOutput : NSObject

@property (nonatomic) struct { int x0; int x1; int x2; int x3; } *lengths;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) UnitsInfo *unitsInfo;
@property (nonatomic) int count;

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)resolvedUnitFormatForUnitID:(int)a0 string:(id)a1;

@end
