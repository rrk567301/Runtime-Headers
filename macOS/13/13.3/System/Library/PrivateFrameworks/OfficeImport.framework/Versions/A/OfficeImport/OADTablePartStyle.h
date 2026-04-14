@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)description;
- (void).cxx_destruct;
- (void)setTextStyle:(id)a0;
- (id)textStyle;
- (id)cellStyle;
- (void)setCellStyle:(id)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)shallowCopy;

@end
