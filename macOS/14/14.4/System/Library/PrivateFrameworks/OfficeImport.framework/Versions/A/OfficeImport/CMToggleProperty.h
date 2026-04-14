@interface CMToggleProperty : CMProperty {
    int wdValue;
}

- (int)value;
- (int)compareValue:(id)a0;
- (id)mapBold;
- (id)mapStrikeTrough;
- (id)cssStringForName:(id)a0;
- (id)initWithCMTogglePropertyValue:(int)a0;
- (id)mapItalic;
- (void)resolveWithBaseProperty:(id)a0;

@end
