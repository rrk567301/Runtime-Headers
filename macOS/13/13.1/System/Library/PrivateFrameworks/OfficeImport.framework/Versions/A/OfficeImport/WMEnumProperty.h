@interface WMEnumProperty : CMProperty {
    unsigned long long wdValue;
}

- (id)description;
- (unsigned long long)value;
- (id)initWithEnum:(unsigned long long)a0;
- (id)mapJustification;
- (id)mapUnderline;
- (id)mapVerticalAlign;
- (id)mapCellTextVAlign;
- (id)cssStringForName:(id)a0;

@end
