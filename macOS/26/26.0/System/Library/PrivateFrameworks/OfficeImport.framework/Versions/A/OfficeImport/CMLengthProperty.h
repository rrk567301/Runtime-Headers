@interface CMLengthProperty : CMProperty {
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)a0 unit:(int)a1;
+ (id)cssStringValue:(double)a0 unit:(int)a1;

- (double)value;
- (id)initWithNumber:(double)a0;
- (id)description;
- (int)compareValue:(id)a0;
- (int)intValue;
- (int)unitType;
- (void)addNumber:(double)a0 unit:(int)a1;
- (id)cssString;
- (id)cssStringForName:(id)a0;
- (id)initWithNumber:(double)a0 unit:(int)a1;

@end
