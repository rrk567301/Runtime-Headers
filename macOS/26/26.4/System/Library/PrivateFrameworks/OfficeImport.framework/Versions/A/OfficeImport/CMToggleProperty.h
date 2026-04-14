@interface CMToggleProperty : CMProperty {
    int wdValue;
}

- (int)compareValue:(id)a0;
- (int)value;
- (id)mapStrikeTrough;
- (id)mapBold;
- (id)cssStringForName:(id)a0;
- (id)initWithCMTogglePropertyValue:(int)a0;
- (id)mapItalic;
- (void)resolveWithBaseProperty:(id)a0;

@end
