@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (void)setBorderStyle:(id)a0;
- (id)description;
- (id)shallowCopy;
- (void).cxx_destruct;
- (id)fill;
- (void)setFill:(id)a0;
- (id)borderStyle;
- (void)applyOverridesFrom:(id)a0;

@end
