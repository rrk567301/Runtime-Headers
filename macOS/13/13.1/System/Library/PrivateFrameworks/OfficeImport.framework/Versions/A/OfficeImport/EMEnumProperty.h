@interface EMEnumProperty : CMProperty {
    int wdValue;
}

+ (id)mapHorizontalAlignmentValue:(int)a0;
+ (id)mapVerticalAlignmentValue:(int)a0;
+ (id)mapUnderlineValue:(int)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (int)value;
- (id)initWithEnum:(int)a0;
- (id)mapUnderline;
- (id)cssStringForName:(id)a0;
- (id)mapHorizontalAlignment;
- (id)mapVerticalAlignment;

@end
