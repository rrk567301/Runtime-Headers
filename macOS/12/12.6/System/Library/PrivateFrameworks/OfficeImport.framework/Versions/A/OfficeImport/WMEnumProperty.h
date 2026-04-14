@interface WMEnumProperty : CMProperty {
    unsigned long long wdValue;
}

- (id)description;
- (unsigned long long)value;
- (id)mapJustification;
- (id)mapVerticalAlign;
- (id)mapUnderline;
- (id)mapCellTextVAlign;
- (id)initWithEnum:(unsigned long long)a0;
- (id)cssStringForName:(id)a0;

@end
