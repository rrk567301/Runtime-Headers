@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)textStyle;
- (void).cxx_destruct;
- (id)shallowCopy;
- (id)description;
- (void)setTextStyle:(id)a0;
- (id)cellStyle;
- (void)setCellStyle:(id)a0;
- (void)applyOverridesFrom:(id)a0;

@end
