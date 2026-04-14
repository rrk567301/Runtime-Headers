@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)description;
- (void)setBorderStyle:(id)a0;
- (id)shallowCopy;
- (id)fill;
- (void)setFill:(id)a0;
- (id)borderStyle;
- (void)applyOverridesFrom:(id)a0;

@end
