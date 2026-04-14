@class NSString, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyleSheet, WDTableStyleOverride;

@interface WDStyle : NSObject <NSCopying> {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    BOOL mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

@property (readonly, weak) WDStyleSheet *styleSheet;
@property (weak) WDStyle *baseStyle;
@property (weak) WDStyle *nextStyle;

- (void)setName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)id;
- (BOOL)hidden;
- (void)setHidden:(BOOL)a0;
- (id)tableProperties;
- (id)characterProperties;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (BOOL)isAnythingOverridden;
- (id)paragraphProperties;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
