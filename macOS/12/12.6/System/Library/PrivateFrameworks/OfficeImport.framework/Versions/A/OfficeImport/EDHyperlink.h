@class EDString, EDReference;

@interface EDHyperlink : NSObject {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (id)description;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)path;
- (void)setPath:(id)a0;
- (id)toolTip;
- (void)setToolTip:(id)a0;
- (void)setReference:(id)a0;
- (id)reference;
- (id)descriptionText;
- (void)setDescriptionText:(id)a0;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (id)dosPath;
- (id)textMark;

@end
