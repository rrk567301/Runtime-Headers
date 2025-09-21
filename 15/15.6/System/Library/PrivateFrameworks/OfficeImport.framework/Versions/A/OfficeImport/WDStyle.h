@class NSString, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyleSheet, WDTableStyleOverride;

@interface WDStyle : NSObject <NSCopying> {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    char mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

@property (readonly, weak) WDStyleSheet *styleSheet;
@property (weak) WDStyle *baseStyle;
@property (weak) WDStyle *nextStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setHidden:(char)a0;
- (void)setName:(id)a0;
- (int)type;
- (char)hidden;
- (id)id;
- (id)tableProperties;
- (id)characterProperties;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (char)isAnythingOverridden;
- (id)paragraphProperties;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
