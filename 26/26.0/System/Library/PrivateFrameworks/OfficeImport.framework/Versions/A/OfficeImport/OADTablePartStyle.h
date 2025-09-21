@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)textStyle;
- (id)description;
- (void)setTextStyle:(id)a0;
- (id)shallowCopy;
- (void).cxx_destruct;
- (id)cellStyle;
- (void)setCellStyle:(id)a0;
- (void)applyOverridesFrom:(id)a0;

@end
