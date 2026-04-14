@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)description;
- (id)textStyle;
- (void).cxx_destruct;
- (void)setTextStyle:(id)a0;
- (id)shallowCopy;
- (id)cellStyle;
- (void)setCellStyle:(id)a0;
- (void)applyOverridesFrom:(id)a0;

@end
