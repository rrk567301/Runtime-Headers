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

- (id)name;
- (id)id;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHidden:(BOOL)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (int)type;
- (id)description;
- (BOOL)hidden;
- (id)tableProperties;
- (id)characterProperties;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (BOOL)isAnythingOverridden;
- (id)paragraphProperties;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
