@interface CMLengthProperty : CMProperty {
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)a0 unit:(int)a1;
+ (id)cssStringValue:(double)a0 unit:(int)a1;

- (int)intValue;
- (id)description;
- (id)initWithNumber:(double)a0;
- (int)compareValue:(id)a0;
- (double)value;
- (int)unitType;
- (void)addNumber:(double)a0 unit:(int)a1;
- (id)cssString;
- (id)cssStringForName:(id)a0;
- (id)initWithNumber:(double)a0 unit:(int)a1;

@end
